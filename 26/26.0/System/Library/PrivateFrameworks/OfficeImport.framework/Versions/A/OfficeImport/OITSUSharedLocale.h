@class NSArray;

@interface OITSUSharedLocale : NSObject {
    struct __CFLocale { } *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedLocale;

- (struct __CFLocale { } *)currentLocale;
- (id)autorelease;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (oneway void)release;
- (void)datePreferencesChanged:(id)a0;

@end
