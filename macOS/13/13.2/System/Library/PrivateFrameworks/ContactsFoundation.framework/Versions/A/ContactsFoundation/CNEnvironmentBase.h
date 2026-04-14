@class NSMutableDictionary;

@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary *_storage;
}

+ (id)defaultEnvironment;
+ (id)currentEnvironment;
+ (id)currentEnvironmentForKey:(void *)a0;
+ (id)effectiveReadingStackForKey:(void *)a0;
+ (id)effectiveWritingStackForKey:(void *)a0;
+ (char *)environmentStackKey;
+ (id)defaultStack;

- (void).cxx_destruct;
- (void)resignCurrent;
- (void)becomeCurrent;

@end
