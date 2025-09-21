@class AEAssessmentIndividualConfiguration, NSMutableDictionary;

@interface AECAssessmentConfigurationWrapper : NSObject

@property (nonatomic) char allowsAutoCorrection;
@property (nonatomic) char allowsSmartPunctuation;
@property (nonatomic) char allowsSpellCheck;
@property (nonatomic) char allowsPredictiveKeyboard;
@property (nonatomic) char allowsKeyboardShortcuts;
@property (nonatomic) char allowsActivityContinuation;
@property (nonatomic) char allowsDictation;
@property (nonatomic) char allowsAccessibilitySpeech;
@property (nonatomic) char allowsAccessibilityTypingFeedback;
@property (nonatomic) char allowsPasswordAutoFill;
@property (nonatomic) char allowsContinuousPathKeyboard;
@property (nonatomic) char allowsKeyboardMathSolving;
@property (nonatomic) char allowsMathPaperSolving;
@property (copy, nonatomic) AEAssessmentIndividualConfiguration *mainIndividualConfiguration;
@property (copy, nonatomic) NSMutableDictionary *configurationsByApplicationDescriptor;

+ (id)wrapperFromConfiguration:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)makeConfiguration;

@end
