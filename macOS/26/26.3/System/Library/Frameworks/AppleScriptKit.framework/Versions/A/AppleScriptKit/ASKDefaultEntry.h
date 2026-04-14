@class NSString, NSUserDefaults, NSObject;

@interface ASKDefaultEntry : NSObject {
    NSString *_name;
    NSObject *_value;
    NSUserDefaults *_userDefaults;
}

- (void)setUserDefaults:(id)a0;
- (void)setContent:(id)a0;
- (id)userDefaults;
- (id)content;
- (id)init;
- (id)name;
- (void)dealloc;
- (void)setValue:(id)a0;
- (id)value;
- (void)setName:(id)a0;
- (id)initWithName:(id)a0 andValue:(id)a1 forUserDefaults:(id)a2;

@end
