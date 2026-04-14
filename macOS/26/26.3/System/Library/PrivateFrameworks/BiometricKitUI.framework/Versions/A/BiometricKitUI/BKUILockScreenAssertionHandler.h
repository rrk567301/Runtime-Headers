@class NSTimer;

@interface BKUILockScreenAssertionHandler : NSObject

@property (retain) NSTimer *displayLockAssertionTimer;
@property (nonatomic) BOOL screenLockBlocked;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_lockScreenFormattedErrorForError:(long long)a0;
- (void)allowScreeLock;
- (void)preventScreenLock;

@end
