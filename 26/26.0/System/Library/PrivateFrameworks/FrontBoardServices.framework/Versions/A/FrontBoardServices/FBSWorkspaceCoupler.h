@class NSString, FBSWorkspace, NSMutableArray;

@interface FBSWorkspaceCoupler : NSObject <BSInvalidatable> {
    FBSWorkspace *_lock_workspace;
    NSMutableArray *_lock_clientConnectionBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedInstance;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)_workspace;
- (void)_enqueueClientConnectionBlock:(id /* block */)a0;
- (BOOL)_isSharedInstance;

@end
