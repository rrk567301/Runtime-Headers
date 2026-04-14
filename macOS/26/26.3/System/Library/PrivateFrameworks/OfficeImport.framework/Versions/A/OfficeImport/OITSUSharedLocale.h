@class NSArray;

@interface OITSUSharedLocale : NSObject {
    struct __CFLocale { } *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedLocale;

- (struct __CFLocale { } *)currentLocale;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)datePreferencesChanged:(id)a0;

@end
