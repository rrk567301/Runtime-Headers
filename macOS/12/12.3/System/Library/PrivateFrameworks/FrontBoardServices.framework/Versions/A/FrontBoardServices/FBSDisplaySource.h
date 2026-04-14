@class CADisplay, NSString, FBSDisplayConfiguration, NSObject, FBSDisplayMonitor;
@protocol OS_dispatch_queue;

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding> {
    CADisplay *_display;
    FBSDisplayMonitor *_lock_monitor;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSDisplayConfiguration *_lock_configuration;
    FBSDisplayConfiguration *_lock_reportedConfiguration;
    FBSDisplayConfiguration *_evlock_configuration;
    FBSDisplayConfiguration *_evlock_reportedConfiguration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _externallyVisibleLock;
    unsigned int _instanceID;
    int _lock_attachment;
    int _evlock_attachment;
    unsigned int _lock_debounceToken;
    BOOL _isMain;
    BOOL _observing;
    BOOL _lock_initialized;
    BOOL _lock_allowsUnknown;
    BOOL _lock_invalidated;
}

@property (readonly, nonatomic) unsigned int displayID;
@property (nonatomic) BOOL allowsUnknown;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *connectedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithMainDisplay:(id)a0 monitor:(id)a1;
- (id)initWithNonMainDisplay:(id)a0 monitor:(id)a1;
- (id)_initWithDisplay:(id)a0 monitor:(id)a1 isMain:(BOOL)a2;
- (void)_updateForInitialization:(BOOL)a0;
- (void)_lock_setConfiguration:(id)a0;
- (void)_lock_noteConnected;
- (void)_lock_noteUpdated;
- (void)_lock_noteDisconnecting;
- (void)_lock_setAttachment:(int)a0;
- (id)_lock_setReportedConfiguration:(id)a0;

@end
