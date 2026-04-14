@class NSDictionary, NSString;

@interface DGAutoLoopOperation : DGOperation

@property (copy, nonatomic) NSDictionary *recipe;
@property (copy, nonatomic) NSString *flavor;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (void).cxx_destruct;
- (BOOL)isMigratable;
- (BOOL)changesGeometry;
- (BOOL)applySettingsDictionary:(id)a0;
- (unsigned long long)geometryHash;
- (BOOL)hasLoopingVideoPlayback;
- (BOOL)isGeometricallyHashEquivalent:(id)a0;

@end
