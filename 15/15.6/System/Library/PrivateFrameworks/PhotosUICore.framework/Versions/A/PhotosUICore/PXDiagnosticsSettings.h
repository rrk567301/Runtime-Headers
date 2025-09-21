@interface PXDiagnosticsSettings : PXSettings

@property (nonatomic) char enableContextualGesture;
@property (nonatomic) char enableInternalSettingsService;
@property (nonatomic) char enableGenericService;
@property (nonatomic) char enableGraphService;
@property (nonatomic) char enableTitleFontService;
@property (nonatomic) char enableCompleteMyMomentService;
@property (nonatomic) char enableDebugDictionaryService;
@property (nonatomic) char enableScrollService;
@property (nonatomic) double scrollSpeed;
@property (nonatomic) long long scrollIterations;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
