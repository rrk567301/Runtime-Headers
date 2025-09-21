@class NSString, NSSet;

@interface MOSettingMetadata : NSObject

@property (readonly, nonatomic) NSString *settingName;
@property (readonly, nonatomic) char isPublic;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) char isPrivacySensitive;
@property (readonly, nonatomic) id defaultValue;
@property (readonly, nonatomic) NSSet *responsibleClients;

- (void).cxx_destruct;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultValue:(id)a1 isPublic:(char)a2 scope:(id)a3 isPrivacySensitive:(char)a4;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
