@class NSString;

@interface PXApplicationSettings : PXSettings

@property (nonatomic) double defaultNavigationTimeoutDuration;
@property (nonatomic) BOOL wantsPseudostringsWithSpecialCharacters;
@property (copy, nonatomic) NSString *stringWithSpecialCharacters;
@property (nonatomic) BOOL wantsPseudostringsWithIncreasedLength;
@property (nonatomic) long long pseudoStringsLengthIncreaseFactor;
@property (nonatomic) BOOL enableSlideshowAction;
@property (nonatomic) BOOL enablePlayMovieAction;
@property (nonatomic) BOOL shouldClearUndoStackAutomatically;
@property (nonatomic) double backgroundThresholdDurationForUndoActionsInvalidation;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)attributedStringTransformedForDisplay:(id)a0;
+ (id)stringTransformedForDisplay:(id)a0;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;
- (BOOL)_wantsPseudoStringsForDisplay;

@end
