@class NSString;

@interface RMModelStatusSchemaManagedSetting : NSObject

@property (readonly, copy, nonatomic) NSString *managedSettingKey;
@property (readonly, copy, nonatomic) NSString *valueType;
@property (readonly) char invertBoolean;

+ (id)parseJSON:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedSetting:(id)a0 valueType:(id)a1 invertBoolean:(char)a2;
- (char)isEqualToManagedSetting:(id)a0;

@end
