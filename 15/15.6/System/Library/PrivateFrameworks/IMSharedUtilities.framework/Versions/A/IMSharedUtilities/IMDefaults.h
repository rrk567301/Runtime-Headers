@interface IMDefaults : NSObject

+ (id)sharedInstance;

- (char)getBoolFromDomain:(id)a0 forKey:(id)a1;
- (char)getBoolFromDomain:(id)a0 forKey:(id)a1 defaultValue:(char)a2;
- (id)getValueFromDomain:(id)a0 forKey:(id)a1;
- (void)setBool:(char)a0 forDomain:(id)a1 forKey:(id)a2;
- (void)setValue:(id)a0 forDomain:(id)a1 forKey:(id)a2;

@end
