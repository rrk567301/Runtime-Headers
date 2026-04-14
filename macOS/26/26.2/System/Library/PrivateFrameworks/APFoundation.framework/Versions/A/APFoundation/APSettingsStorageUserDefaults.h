@class NSDictionary;

@interface APSettingsStorageUserDefaults : NSObject <APSettingsStorableProtocol>

@property (readonly, nonatomic) NSDictionary *defaults;

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (id)valueForKey:(id)a0;
- (void)synchronize;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)initWithDefaultValues:(id)a0;

@end
