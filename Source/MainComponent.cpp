/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 210);
    
	setLookAndFeel(&lf);

    label.setColour(Label::textColourId, Colours::black);
    label.setEditable(true);
    addAndMakeVisible(label);

	textEditor.setText("This is a text editor.");
	addAndMakeVisible(textEditor);

	textButton.setClickingTogglesState(true);
	addAndMakeVisible(textButton);

	addAndMakeVisible(slider1);
	addAndMakeVisible(slider2);
}

MainComponent::~MainComponent()
{
    setLookAndFeel(&lf.getDefaultLookAndFeel());
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll (Colours::lightgrey);
    
    g.setColour (Colours::orange);
    auto centralArea = getLocalBounds().toFloat().reduced(10.0f);
    g.drawRoundedRectangle(centralArea, 5.0f, 3.0f);
    
    //Constant colours
        Array<Colour> colours { Colours::red, Colours::green, Colours::blue };
    //Find colour
        //auto defaultColour = Colours::black;
        //Array<Colour> colours { Colours::findColourForName(removeSpaces("darkRed "), defaultColour),
        //                        Colours::findColourForName(removeSpaces(" Darkgreen"), defaultColour),
        //                        Colours::findColourForName(removeSpaces("Dark Blue"), defaultColour) };
    //Custom
        //Array<Colour> colours { Colour(255, 0, 0),
        //                        Colour(0, 255, 0),
        //                        Colour(0, 0, 255)};
    //Hexadecimal
        //Array<Colour> colours { Colour(0xffff0000),
        //                        Colour(0xff008000),
        //                        Colour(0xff0000ff)};
    //Float RGBA
        //Array<Colour> colours { Colour::fromFloatRGBA(1.0f, 0.0f, 0.0f, 1.0f),
        //                        Colour::fromFloatRGBA(0.0f, 1.0f, 0.0f, 1.0f),
        //                        Colour::fromFloatRGBA(0.0f, 0.0f, 1.0f, 1.0f),
        //                        Colour::fromFloatRGBA(0.0f, 0.5f, 1.0f, 1.0f)};
    //HSV
        //Array<Colour> colours { Colour::fromHSV(0.4f, 0.5f, 0.7f, 1.0f),
        //                        Colour::fromHSV(0.5f, 0.5f, 0.7f, 1.0f),
        //                        Colour::fromHSV(0.6f, 0.5f, 0.7f, 1.0f) };
    //Get Hue
        //auto purpleHue = Colours::purple.getHue();
        //Array<Colour> colours { Colour::fromHSV(purpleHue, 0.5f, 0.3f, 1.0f),
        //                        Colour::fromHSV(purpleHue, 0.5f, 0.5f, 1.0f),
        //                        Colour::fromHSV(purpleHue, 0.5f, 0.7f, 1.0f) };
    //Darker / Brighter
        //auto baseColour = Colours::orange;
        //Array<Colour>colours {  baseColour.darker(),
        //                        baseColour,
        //                        baseColour.brighter() };
    //Interpolated
        //auto colour1 = Colours::red;
        //auto colour2 = Colours::purple;
        //Array<Colour> colours { colour1, colour1.interpolatedWith(colour2, 0.5), colour2 };
    //Contrast
        //auto baseColour = Colours::darkcyan;
        //Array<Colour> colours { baseColour, baseColour.contrasting(0.5f) };
    //Contrast against 2 other colours
        //auto colour1 = Colours::lightblue;
        //auto colour2 = Colours::darkred;
        //Array <Colour> colours {    colour1,
        //                            Colour::contrasting(colour1, colour2),
        //                            colour2};
    //Contrast against 2 other colours
        //auto colour1 = Colours::white;
        //auto colour2 = Colours::black;
        //Array <Colour> colours { colour1, colour2, colour1.overlaidWith(colour2.withAlpha(0.5f))};
    auto colourBarArea = centralArea.reduced(4.0f).withHeight(20.0f);
    auto colourArea = colourBarArea.withWidth(colourBarArea.getWidth() / colours.size());
    for (auto colour : colours)
    {
        g.setColour(colour);
        g.fillRect(colourArea);
        colourArea.translate(colourArea.getWidth(), 0.0f);
    }
}

void MainComponent::resized()
{
    label.setBounds (20, 40,  getWidth() - 40, 20);
    textEditor.setBounds (20, 70,  getWidth() - 40, 20);
    textButton.setBounds (20, 100, getWidth() - 40, 20);
    slider1.setBounds (20, 130, getWidth() - 40, 20);
    slider2.setBounds (20, 160, getWidth() - 40, 20);
}
