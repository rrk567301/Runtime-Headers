@class NSMutableDictionary;

@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary *_storage;
}

+ (id)defaultEnvironment;
+ (id)currentEnvironment;
+ (char *)environmentStackKey;
+ (id)currentEnvironmentForKey:(void *)a0;
+ (id)effectiveReadingStackForKey:(void *)a0;
+ (id)defaultStack;
+ (id)effectiveWritingStackForKey:(void *)a0;

- (void).cxx_destruct;
- (void)resignCurrent;
- (void)becomeCurrent;

@end
