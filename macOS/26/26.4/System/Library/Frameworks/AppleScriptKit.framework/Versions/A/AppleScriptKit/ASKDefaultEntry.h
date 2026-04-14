@class NSString, NSUserDefaults, NSObject;

@interface ASKDefaultEntry : NSObject {
    NSString *_name;
    NSObject *_value;
    NSUserDefaults *_userDefaults;
}

- (void)setUserDefaults:(id)a0;
- (id)content;
- (id)name;
- (void)setContent:(id)a0;
- (void)setName:(id)a0;
- (id)init;
- (id)userDefaults;
- (id)value;
- (void)setValue:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 andValue:(id)a1 forUserDefaults:(id)a2;

@end
