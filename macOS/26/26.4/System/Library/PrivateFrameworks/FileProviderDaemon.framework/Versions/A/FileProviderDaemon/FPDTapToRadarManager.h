@class NSObject;
@protocol OS_dispatch_queue;

@interface FPDTapToRadarManager : NSObject {
    NSObject<OS_dispatch_queue> *_executionQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(long long)a4 keywords:(id)a5 attachments:(id)a6 displayReason:(id)a7 providerID:(id)a8 additionalDiagnosticExtensions:(id)a9 additionalDeviceIDs:(id)a10 skipSysdiagnose:(BOOL)a11;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 keywords:(id)a2 attachments:(id)a3 displayReason:(id)a4 providerID:(id)a5;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 keywords:(id)a2 attachments:(id)a3 displayReason:(id)a4 providerID:(id)a5 additionalDiagnosticExtensions:(id)a6 additionalDeviceIDs:(id)a7 skipSysdiagnose:(BOOL)a8;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 keywords:(id)a2 attachments:(id)a3 displayReason:(id)a4 providerID:(id)a5 skipSysdiagnose:(BOOL)a6;

@end
