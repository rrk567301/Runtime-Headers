@class NSString, NSUserDefaults, NSObject;

@interface ASKDefaultEntry : NSObject {
    NSString *_name;
    NSObject *_value;
    NSUserDefaults *_userDefaults;
}

- (void)setName:(id)a0;
- (id)content;
- (id)userDefaults;
- (void)setUserDefaults:(id)a0;
- (void)setValue:(id)a0;
- (id)name;
- (void)setContent:(id)a0;
- (id)value;
- (id)init;
- (void)dealloc;
- (id)initWithName:(id)a0 andValue:(id)a1 forUserDefaults:(id)a2;

@end
