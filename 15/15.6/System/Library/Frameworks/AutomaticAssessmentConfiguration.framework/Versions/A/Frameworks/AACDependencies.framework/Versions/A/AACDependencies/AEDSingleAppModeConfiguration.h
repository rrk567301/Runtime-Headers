@interface AEDSingleAppModeConfiguration : NSObject

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
@property (nonatomic) char showsUserConfirmationPromptsAndBanners;

@end
