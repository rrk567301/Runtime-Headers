@class NSDictionary;

@interface APSettingsStorageUserDefaults : NSObject <APSettingsStorableProtocol>

@property (readonly, nonatomic) NSDictionary *defaults;

- (void)synchronize;
- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithDefaultValues:(id)a0;

@end
