@class NSString, NSMutableArray, PFAction;

@interface PFActionLog : PFWeakContainer <PFActionNotificationsReceiver> {
    PFAction *_observedAction;
    NSMutableArray *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (id)initWithAction:(id)a0;
- (void)addEvent:(id)a0;
- (void)action:(id)a0 statusChangedFrom:(int)a1 to:(int)a2;
- (void)actionReportedProgress:(id)a0;
- (void)weakReferenceBecameNil;

@end
