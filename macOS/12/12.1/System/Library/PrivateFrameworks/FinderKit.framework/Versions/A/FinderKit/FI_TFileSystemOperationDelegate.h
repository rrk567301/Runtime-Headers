@class NSString;

@interface FI_TFileSystemOperationDelegate : NSObject <TFileSystemOperationDelegateProtocol>

@property (retain, nonatomic) FI_TFileSystemOperationDelegate *selfReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

+ (id)makeDelegate;

- (void).cxx_destruct;
- (void)aboutToTearDown;
- (int)asyncNodeOperation:(id)a0 errorNotification:(const struct TOperationMonitor { struct OpaqueMonitorData *x0; unsigned char x1; struct OperationStatus *x2; unsigned int x3; unsigned int x4; struct DSSemaphore *x5; struct OpaqueEventQueue *x6; void /* function */ *x7; void /* function */ *x8; int x9; id /* block */ x10; } *)a1 error:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a2 reply:(struct NodeEventReply { struct DSSemaphore *x0; unsigned int x1; int x2; } *)a3;
- (int)asyncNodeOperation:(id)a0 completedNotification:(const struct TOperationMonitor { struct OpaqueMonitorData *x0; unsigned char x1; struct OperationStatus *x2; unsigned int x3; unsigned int x4; struct DSSemaphore *x5; struct OpaqueEventQueue *x6; void /* function */ *x7; void /* function */ *x8; int x9; id /* block */ x10; } *)a1;
- (id)initPriv;

@end
