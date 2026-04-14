@class NSDictionary, NSString;

@interface DGAutoLoopOperation : DGOperation

@property (copy, nonatomic) NSDictionary *recipe;
@property (copy, nonatomic) NSString *flavor;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)changesGeometry;
- (BOOL)applySettingsDictionary:(id)a0;
- (unsigned long long)geometryHash;
- (BOOL)hasLoopingVideoPlayback;
- (BOOL)isGeometricallyHashEquivalent:(id)a0;

@end
