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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)datePreferencesChanged:(id)a0;

@end
