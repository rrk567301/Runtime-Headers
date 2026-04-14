@class NSPointerArray, DMTool;

@interface _DMListDA : NSObject {
    double _givenTimeout;
    struct __DASession { } *_givenDASession;
    BOOL _currentDAIdle;
    NSPointerArray *_currentList;
    BOOL _once;
    DMTool *_dmToolOrNil;
}

+ (struct __DADisk { } *)waitAndCopyDiskForBSD:(id)a0 daSession:(struct __DASession { } *)a1 timeout:(double)a2 preWait:(double)a3 withDMTool:(id)a4;
+ (BOOL)waitForDAIdleWithDASession:(struct __DASession { } *)a0 timeout:(double)a1 withDMTool:(id)a2;

- (void)dealloc;
- (void)doReleaseAndRemoveDisksFromListPriv;
- (void)doBlockingSearchCopyingDisksForKeyPriv:(id)a0 value:(id)a1;
- (id)initWithSession:(struct __DASession { } *)a0 timeout:(double)a1 withDMTool:(id)a2;
- (struct __DADisk { } *)copyCurrentDiskForKey:(id)a0 value:(id)a1;
- (BOOL)anticipatingMoreDisks;

@end
