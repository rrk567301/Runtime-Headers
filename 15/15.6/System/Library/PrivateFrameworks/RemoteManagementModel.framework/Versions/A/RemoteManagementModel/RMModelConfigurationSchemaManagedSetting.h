@class NSDictionary, RMModelConfigurationSchema, NSString;

@interface RMModelConfigurationSchemaManagedSetting : NSObject

@property (copy, nonatomic) NSDictionary *supportedOS;
@property (weak, nonatomic) RMModelConfigurationSchema *parentSchema;
@property (readonly, copy, nonatomic) NSString *managedSettingKey;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) NSString *valueType;
@property (readonly) char invertBoolean;

+ (id)parseJSON:(id)a0 parentSchema:(id)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedSetting:(id)a0 keyPath:(id)a1 valueType:(id)a2 invertBoolean:(char)a3 supportedOSOverride:(id)a4 parentSchema:(id)a5;
- (char)isEqualToManagedSetting:(id)a0;
- (char)isSupportedForPlatform:(long long)a0 scope:(long long)a1 enrollmentType:(long long)a2;

@end
