/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class CustomLookAndFeel : public LookAndFeel_V4
{
public:
    CustomLookAndFeel()
    {
        setColour(Slider::thumbColourId, Colours::red);
        setColour(TextEditor::backgroundColourId, Colours::darkcyan);
        setColour(TextButton::buttonColourId, Colours::purple);
        setColour(TextButton::buttonOnColourId, Colours::mediumpurple);
    }
};

class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

    static String removeSpaces (const String& text)
    {
        return text.removeCharacters(" ");
    }
private:
	CustomLookAndFeel lf;
    Label label { {}, "This is some label text."};
	TextButton textButton {"This is a button"};
	TextEditor textEditor;
	Slider slider1;
	Slider slider2;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
