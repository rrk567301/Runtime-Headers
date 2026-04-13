@class NSArray;

@interface VTUIStyle : NSObject {
    NSArray *_deviceStringSuffixes;
    NSArray *_deviceImageSuffixes;
    BOOL _isIpad;
    BOOL _isLargeIpad;
    BOOL _needMoreLineSpacing;
}

@property (nonatomic) long long enrollmentMode;
@property (nonatomic) BOOL isBuddy;
@property (nonatomic) BOOL isHeySiriAlwaysOn;

+ (id)sharedStyle;

- (id)init;
- (void).cxx_destruct;
- (id)titleFont;
- (id)subtitleFont;
- (double)horizontalPadding;
- (void)orientationChanged:(id)a0;
- (id)footerButtonFont;
- (id)buttonTextColor;
- (id)instructionFont;
- (id)instructionColor;
- (id)statusFont;
- (id)statusColor;
- (double)instructionOffsetFromBottom;
- (double)orbHeight;
- (id)deviceSpecificString:(id)a0;
- (double)headerTitleLinespacing;
- (double)imageViewTopOffset;
- (id)_deviceImageForBaseImageName:(id)a0;
- (double)subtitleLineHeight;
- (double)titleBaselineOffsetFromTop;
- (double)subtitleBaselineOffset;
- (double)continueButtonBaselineOffset;
- (double)imageViewBottomOffsetFromFooter;
- (double)statusLabelMinHeight;
- (double)statusLabelVerticalOffsetFromCenter;
- (double)skipButtonBaselineBottomMargin;
- (double)tickMarkHorizontalSizeRatio;
- (BOOL)footerShouldPinToImage;
- (double)footerTextBaselineFromTop;
- (double)footerContinueButtonMinBaselineFromText;
- (double)footerSkipButtonBaselineFromContinueButton;
- (double)footerSkipButtonBaselineFromBottom;
- (double)footerLabelLineHeight;
- (id)footerLabelFont;
- (double)footerHorizontalPadding;
- (id)footerTextColor;
- (BOOL)shouldShowFooterLine;
- (double)turnOnSiriHorizontalPadding;
- (double)turnOnSiriHorizontalPaddingPortrait;
- (double)turnOnSiriHorizontalPaddingLandscape;
- (double)turnOnSiriImageOffsetFromTop;
- (double)turnOnSiriImageOffsetFromTopPortrait;
- (double)turnOnSiriImageOffsetFromTopLandscape;
- (id)turnOnSiriContinueButtonFont;
- (double)turnOnSiriContinueButtonWidth;
- (double)turnOnSiriContinueButtonHeight;
- (double)radarBtnVerticalPadding;
- (double)radarBtnHorizontalPadding;
- (id)deviceDoneImage;
- (id)deviceSetupImage;

@end
