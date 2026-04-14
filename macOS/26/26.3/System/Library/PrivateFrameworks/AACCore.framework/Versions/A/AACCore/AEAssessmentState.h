@class AEAssessmentIndividualConfiguration, NSDictionary;

@interface AEAssessmentState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) AEAssessmentIndividualConfiguration *mainIndividualConfiguration;
@property (copy, nonatomic) NSDictionary *configurationsByApplicationDescriptor;
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

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
