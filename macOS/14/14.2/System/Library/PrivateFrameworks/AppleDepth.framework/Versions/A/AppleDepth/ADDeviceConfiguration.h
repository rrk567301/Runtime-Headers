@class NSUserDefaults, NSMutableDictionary;

@interface ADDeviceConfiguration : NSObject {
    NSUserDefaults *_globalUserDefaults;
    NSUserDefaults *_appleDepthUserDefaults;
    NSMutableDictionary *_currentDefaults;
    BOOL _ignoreValueUpdate;
}

+ (BOOL)boolForKey:(id)a0;
+ (id)numberForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (float)floatForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (BOOL)isInternalBuild;
+ (id)sharedConfiguration;
+ (BOOL)deviceList:(id)a0 containsDeviceName:(id)a1;
+ (id)getDefaultConfiguration;
+ (id)getDeviceName;
+ (unsigned long long)getLidarType:(id)a0;
+ (id)listForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)createPropertyForKey:(id)a0;
- (void)updateValue:(id)a0 forKey:(id)a1;

@end
