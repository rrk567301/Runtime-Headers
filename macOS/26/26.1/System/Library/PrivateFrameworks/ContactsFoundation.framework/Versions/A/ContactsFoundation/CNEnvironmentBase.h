@class NSMutableDictionary;

@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary *_storage;
}

+ (id)currentEnvironment;
+ (char *)environmentStackKey;
+ (id)defaultStack;
+ (id)defaultEnvironment;
+ (id)currentEnvironmentForKey:(void *)a0;
+ (id)effectiveReadingStackForKey:(void *)a0;
+ (id)effectiveWritingStackForKey:(void *)a0;

- (void).cxx_destruct;
- (void)resignCurrent;
- (void)becomeCurrent;

@end
