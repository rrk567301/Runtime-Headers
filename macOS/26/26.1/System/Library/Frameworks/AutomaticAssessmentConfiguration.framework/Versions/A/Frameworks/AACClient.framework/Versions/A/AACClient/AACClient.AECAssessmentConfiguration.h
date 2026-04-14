@class AEAssessmentIndividualConfiguration, NSDictionary;

@interface AACClient.AECAssessmentConfiguration : NSObject {
    void /* function */ configurationsByApplicationDescriptor;
}

@property (nonatomic, retain) AEAssessmentIndividualConfiguration *mainIndividualConfiguration;
@property (nonatomic, copy) NSDictionary *configurationsByApplicationDescriptor;
@property (nonatomic) BOOL allowsAutoCorrection;
@property (nonatomic) BOOL allowsSmartPunctuation;
@property (nonatomic) BOOL allowsSpellCheck;
@property (nonatomic) BOOL allowsPredictiveKeyboard;
@property (nonatomic) BOOL allowsKeyboardShortcuts;
@property (nonatomic) BOOL allowsActivityContinuation;
@property (nonatomic) BOOL allowsDictation;
@property (nonatomic) BOOL allowsAccessibilityKeyboard;
@property (nonatomic) BOOL allowsAccessibilityLiveCaptions;
@property (nonatomic) BOOL allowsAccessibilityReader;
@property (nonatomic) BOOL allowsAccessibilitySpeech;
@property (nonatomic) BOOL allowsAccessibilityTypingFeedback;
@property (nonatomic) BOOL allowsPasswordAutoFill;
@property (nonatomic) BOOL allowsContinuousPathKeyboard;
@property (nonatomic) BOOL allowsKeyboardMathSolving;
@property (nonatomic) BOOL allowsMathPaperSolving;
@property (nonatomic) BOOL allowsScreenshots;
@property (nonatomic) BOOL _allowsNetworkAccess;
@property (nonatomic) BOOL _allowsContentCapture;

- (void).cxx_destruct;
- (id)init;

@end
