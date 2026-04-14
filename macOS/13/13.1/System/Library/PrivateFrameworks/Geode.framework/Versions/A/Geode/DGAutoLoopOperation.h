@class NSDictionary, NSString;

@interface DGAutoLoopOperation : DGOperation

@property (copy, nonatomic) NSDictionary *recipe;
@property (copy, nonatomic) NSString *flavor;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)changesGeometry;
- (unsigned long long)geometryHash;
- (BOOL)isGeometricallyHashEquivalent:(id)a0;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)hasLoopingVideoPlayback;

@end
