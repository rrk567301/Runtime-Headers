@class NSDictionary, NSUserDefaults;

@interface ULDefaultsSingleton : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSDictionary *defaultsDictionary;

+ (id)shared;

- (void)refresh;
- (id)init;
- (void).cxx_destruct;
- (void)_defaultsSync;
- (void)resetTemporaryKey:(id)a0;
- (id)settingsString;
- (void)updateTemporaryKey:(id)a0 withObject:(id)a1;

@end
