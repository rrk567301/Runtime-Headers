@class NSNumber, NSDictionary;

@interface APCSODCAFeatureFlag : APConfiguration

@property (readonly, nonatomic) NSNumber *onDeviceAttributionEnabledPercentage;
@property (readonly, nonatomic) NSNumber *onDeviceConversionEnabledPercentage;
@property (readonly, nonatomic) NSNumber *modernDataCollectionEnabledPercentage2024G;
@property (readonly, nonatomic) NSNumber *actionStoreEnabledPercentage;
@property (readonly, nonatomic) NSNumber *experimentationReportEnabledPercentage2024G;
@property (retain, nonatomic) NSDictionary *configDictionary;
@property (readonly, nonatomic) char onDeviceAttributionEnabled;
@property (readonly, nonatomic) char onDeviceConversionEnabled;
@property (readonly, nonatomic) char modernDataCollectionEnabled;
@property (readonly, nonatomic) char actionStoreEnabled;
@property (readonly, nonatomic) char experimentationReportEnabled;

+ (id)path;

- (void).cxx_destruct;
- (id)_fileSystemPath;
- (void)_clearRollout;
- (char)_isSliceWithinEnablementPercentage:(id)a0 forFeature:(id)a1;
- (id)_knownRollout;
- (void)_storeRolloutForFlag:(id)a0 isEnabled:(char)a1 slice:(id)a2;

@end
