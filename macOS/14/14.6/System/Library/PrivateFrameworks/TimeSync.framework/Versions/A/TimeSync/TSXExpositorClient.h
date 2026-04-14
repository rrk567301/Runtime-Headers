@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSXExpositorClient : TSXClient <TSXExpositorClientProtocol> {
    NSObject<OS_dispatch_queue> *_clockManagerNotifications;
    NSMutableArray *_clockManagerMatchNotificationsArray;
    NSMutableArray *_clockManagerTerminateNotificationsArray;
    BOOL _clockManagerAvailable;
    NSObject<OS_dispatch_queue> *_ptpManagerNotifications;
    NSMutableArray *_ptpManagerMatchNotificationsArray;
    NSMutableArray *_ptpManagerTerminateNotificationsArray;
    BOOL _ptpManagerAvailable;
    BOOL _inited;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)clientProtocol;
+ (id)serverProtocol;
+ (id)sharedExpositorClient;

- (id)init;
- (void).cxx_destruct;
- (id)exportedObject;
- (id)gPTPPortDiagnosticInfoForPortWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
- (id)clockManagerDaemonClassNameForClockIdentifier:(unsigned long long)a0;
- (id)clockManagerDiagnosticInfo;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)a0;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)a0 daemonClassName:(id *)a1;
- (void)clockManagerIsAvailable;
- (void)clockManagerIsUnavailable;
- (void)clockManagerNotifyWhenClockManagerIsAvailable:(id /* block */)a0;
- (void)clockManagerNotifyWhenClockManagerIsUnavailable:(id /* block */)a0;
- (id)clockNameForClockIdentifier:(unsigned long long)a0;
- (id)gPTPManagerDiagnosticInfo;
- (void)gPTPManagerIsAvailable;
- (void)gPTPManagerIsUnavailable;
- (void)gPTPManagerNotifyWhengPTPManagerIsAvailable:(id /* block */)a0;
- (void)gPTPManagerNotifyWhengPTPManagerIsUnavailable:(id /* block */)a0;
- (void)interruptedConnection;
- (void)invalidatedConnection;
- (id)kernelClockAvailableKernelClockIdentifiers;

@end
