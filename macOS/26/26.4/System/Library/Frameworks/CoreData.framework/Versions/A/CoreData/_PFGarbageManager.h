@class NSMutableDictionary, NSMutableSet;

@interface _PFGarbageManager : NSObject {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableSet *_filesToCleanUp;
}

+ (void)initialize;
+ (id)defaultInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_tryRetain;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
