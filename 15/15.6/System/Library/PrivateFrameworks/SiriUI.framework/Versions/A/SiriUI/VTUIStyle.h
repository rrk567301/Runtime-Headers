@class NSArray;

@interface VTUIStyle : NSObject {
    NSArray *_deviceStringSuffixes;
    NSArray *_deviceImageSuffixes;
    char _isIpad;
    char _isLargeIpad;
    char _needMoreLineSpacing;
}

@property (nonatomic) long long enrollmentMode;
@property (nonatomic) char isBuddy;
@property (nonatomic) char isHeySiriAlwaysOn;

+ (id)sharedStyle;

- (id)init;
- (void).cxx_destruct;
- (id)titleFont;
- (id)subtitleFont;
- (double)horizontalPadding;
- (void)orientationChanged:(id)a0;
- (id)footerButtonFont;
- (id)buttonTextColor;
- (id)deviceDoneImage;
- (id)footerTextColor;
- (id)instructionFont;
- (id)footerLabelFont;
- (double)imageViewBottomOffsetFromFooter;
- (double)staticOrbHeight;
- (id)_deviceImageForBaseImageName:(id)a0;
- (double)continueButtonBaselineOffset;
- (id)deviceSetupImage;
- (id)deviceSpecificString:(id)a0;
- (double)footerContinueButtonMinBaselineFromText;
- (double)footerHorizontalPadding;
- (double)footerLabelLineHeight;
- (char)footerShouldPinToImage;
- (double)footerSkipButtonBaselineFromBottom;
- (double)footerSkipButtonBaselineFromContinueButton;
- (double)footerTextBaselineFromTop;
- (double)headerTitleLinespacing;
- (double)imageViewTopOffset;
- (id)instructionColor;
- (double)instructionOffsetFromPrelude;
- (double)orbHeight;
- (double)orbOffsetFromTop;
- (id)preludeFont;
- (double)radarBtnHorizontalPadding;
- (double)radarBtnVerticalPadding;
- (char)shouldSetupForMultipleTriggerPhrases;
- (char)shouldSetupForMultipleTriggerPhrasesForLanguageCode:(id)a0;
- (char)shouldShowFooterLine;
- (double)skipButtonBaselineBottomMargin;
- (id)statusColor;
- (id)statusFont;
- (double)statusLabelMinHeight;
- (double)statusLabelVerticalOffsetFromCenter;
- (double)subtitleBaselineOffset;
- (double)subtitleLineHeight;
- (char)supportsSiriConversationsAndBargeIn;
- (double)tickMarkHorizontalSizeRatio;
- (double)titleBaselineOffsetFromTop;
- (id)turnOnSiriContinueButtonFont;
- (double)turnOnSiriContinueButtonHeight;
- (double)turnOnSiriContinueButtonWidth;
- (double)turnOnSiriHorizontalPadding;
- (double)turnOnSiriHorizontalPaddingLandscape;
- (double)turnOnSiriHorizontalPaddingPortrait;
- (double)turnOnSiriImageOffsetFromTop;
- (double)turnOnSiriImageOffsetFromTopLandscape;
- (double)turnOnSiriImageOffsetFromTopPortrait;

@end
