@class NSArray, NSString, NSObject, EFLocked;
@protocol OS_os_log;

@interface EDClientState : NSObject <EDClientStateReporting, EFLoggable> {
    EFLocked *_visibleMailboxObjectIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _visibleMailboxesLock;
    _Atomic BOOL _isForeground;
    _Atomic BOOL _isRunningTests;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) char isForeground;
@property (readonly) char isRunningTests;
@property (readonly, copy) NSArray *visibleMailboxObjectIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)exitDaemon;
- (id)giveBoostWithCompletionBlock:(id /* block */)a0;
- (void)setIsForeground:(char)a0;
- (void)setIsRunningTests:(char)a0;
- (void)setStateForDemoMode:(id /* block */)a0;
- (void)setVisibleMailboxObjectIDs:(id)a0;

@end
