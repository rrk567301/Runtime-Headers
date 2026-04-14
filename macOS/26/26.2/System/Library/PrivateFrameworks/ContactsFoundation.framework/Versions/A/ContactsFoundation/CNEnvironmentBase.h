@class NSMutableDictionary;

@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary *_storage;
}

+ (id)currentEnvironment;
+ (id)defaultStack;
+ (id)defaultEnvironment;
+ (char *)environmentStackKey;
+ (id)currentEnvironmentForKey:(void *)a0;
+ (id)effectiveReadingStackForKey:(void *)a0;
+ (id)effectiveWritingStackForKey:(void *)a0;

- (void)resignCurrent;
- (void).cxx_destruct;
- (void)becomeCurrent;

@end
