@class NSMutableDictionary, NSMutableSet;

@interface _PFGarbageManager : NSObject {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableSet *_filesToCleanUp;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)defaultInstance;

- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (oneway void)release;

@end
