@class AEAssessmentIndividualConfiguration, NSDictionary;

@interface AEAssessmentState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isEnabled) char enabled;
@property (retain, nonatomic) AEAssessmentIndividualConfiguration *mainIndividualConfiguration;
@property (copy, nonatomic) NSDictionary *configurationsByApplicationDescriptor;
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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
