@interface MPSGraphCompilationDescriptor : NSObject <NSCopying>

@property unsigned long long compilerOptions;
@property unsigned long long aneCompilerSpatialSplitting;
@property BOOL compileANEInMemory;
@property (nonatomic) unsigned long long optimizationLevel;
@property (nonatomic) unsigned long long optimizationProfile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)disableTypeInference;
- (void)enableFileBackedConstants;
- (void)enableDevicePlacement;

@end
