@interface PXGridSettings : PXSettings

@property (nonatomic) char disableSelectionOverlayView;
@property (nonatomic) long long weightingScheme;
@property (nonatomic) char enableAutomaticTransitionToSelectMode;
@property (nonatomic) char simulateLongTitles;
@property (nonatomic) long long simulatedNumberOfLocations;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
