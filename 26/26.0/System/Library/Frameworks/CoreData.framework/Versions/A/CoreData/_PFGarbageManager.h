@class NSMutableDictionary, NSMutableSet;

@interface _PFGarbageManager : NSObject {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableSet *_filesToCleanUp;
}

+ (void)initialize;
+ (id)defaultInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)autorelease;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;

@end
