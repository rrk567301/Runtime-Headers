@class NSString, TSSPropertyMap;

@interface TSCHConfiguration : NSObject {
    char _shouldForceDiscreteGraphicsFor3D;
}

@property (nonatomic) char supportsChartDataEditor;
@property (nonatomic) char supportsChartRangeEditingMode;
@property (nonatomic) char supportsNumberFormatSameAsSource;
@property (nonatomic) char showMessageOnSelection;
@property (nonatomic) char disableHighQualityRenderingIfNecessary;
@property (nonatomic) char supports3DFillDataEmbeddingRecovery;
@property (nonatomic) char use3DFillFor3DChartFallback;
@property (nonatomic) char exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
@property (nonatomic) char supportsTextBackground;
@property (nonatomic) char supportsTextWrapping;
@property (retain, nonatomic) Class multiDataChartOptionsControllerBuildSupportClass;
@property (copy, nonatomic) NSString *modifyChartDataHelpKey;
@property (nonatomic) long long analyticsAppType;
@property (readonly) TSSPropertyMap *appSpecificPropertyOverrides;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedChartConfiguration;
+ (void)resetSharedChartConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
