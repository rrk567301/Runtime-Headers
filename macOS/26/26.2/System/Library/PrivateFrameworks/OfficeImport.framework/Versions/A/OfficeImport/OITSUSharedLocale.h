@class NSArray;

@interface OITSUSharedLocale : NSObject {
    struct __CFLocale { } *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedLocale;

- (struct __CFLocale { } *)currentLocale;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)init;
- (void)dealloc;
- (void)datePreferencesChanged:(id)a0;

@end
