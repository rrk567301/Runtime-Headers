@class NSString, NSUserDefaults, NSObject;

@interface ASKDefaultEntry : NSObject {
    NSString *_name;
    NSObject *_value;
    NSUserDefaults *_userDefaults;
}

- (id)userDefaults;
- (void)setUserDefaults:(id)a0;
- (void)setValue:(id)a0;
- (void)setContent:(id)a0;
- (id)value;
- (id)content;
- (void)dealloc;
- (void)setName:(id)a0;
- (id)init;
- (id)name;
- (id)initWithName:(id)a0 andValue:(id)a1 forUserDefaults:(id)a2;

@end
