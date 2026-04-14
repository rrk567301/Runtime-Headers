@interface DRSCKConfig : NSObject

@property (readonly, nonatomic) unsigned char rapidEnvironment;
@property (readonly, nonatomic) unsigned char containerEnvironment;
@property (readonly, nonatomic) long long ckRapidEnvironment;
@property (readonly, nonatomic) long long ckContainerEnvironment;

+ (id)defaultConfig;
+ (id)_configWithConfigMO_ON_MOC_QUEUE:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithContainerEnvironment:(unsigned char)a0 rapidEnvironment:(unsigned char)a1;
- (id)newConfigMOInContext_ON_MOC_QUEUE:(id)a0;

@end
