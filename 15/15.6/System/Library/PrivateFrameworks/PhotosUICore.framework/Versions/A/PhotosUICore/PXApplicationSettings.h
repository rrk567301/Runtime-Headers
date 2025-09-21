@class NSString;

@interface PXApplicationSettings : PXSettings

@property (nonatomic) double defaultNavigationTimeoutDuration;
@property (nonatomic) char wantsPseudostringsWithSpecialCharacters;
@property (copy, nonatomic) NSString *stringWithSpecialCharacters;
@property (nonatomic) char wantsPseudostringsWithIncreasedLength;
@property (nonatomic) long long pseudoStringsLengthIncreaseFactor;
@property (nonatomic) char enableSlideshowAction;
@property (nonatomic) char enablePlayMovieAction;
@property (nonatomic) char shouldClearUndoStackAutomatically;
@property (nonatomic) double backgroundThresholdDurationForUndoActionsInvalidation;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)attributedStringTransformedForDisplay:(id)a0;
+ (id)stringTransformedForDisplay:(id)a0;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;
- (char)_wantsPseudoStringsForDisplay;

@end
