@class NSXPCListener, NSString;

@interface PowerUISmartChargeManagerUnsupported : NSObject <NSXPCListenerDelegate, PowerUISmartChargeManaging>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)client:(id)a0 setMCLState:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)legacy_isOBCEngagedWithHandler:(id /* block */)a0;
- (void)batteryGaugingStatusWithHandler:(id /* block */)a0;
- (void)client:(id)a0 setChargingStatus:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)client:(id)a0 setDEoCState:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)client:(id)a0 setState:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (unsigned long long)currentChargeLimit;
- (void)engageFrom:(id)a0 until:(id)a1 repeatUntil:(id)a2 overrideAllSignals:(BOOL)a3 withHandler:(id /* block */)a4;
- (void)enterDevelopmentMode;
- (void)forceModelUpdate;
- (void)fullChargeDeadlineWithHandler:(id /* block */)a0;
- (void)isCECSupportedWithHandler:(id /* block */)a0;
- (void)isDEoCCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)isDEoCSupportedWithHandler:(id /* block */)a0;
- (void)isMCLCurrentlyEnabledWithHandler:(id /* block */)a0;
- (BOOL)isMCLSupported;
- (void)isMCLSupportedWithHandler:(id /* block */)a0;
- (void)isOBCEngagedOrChargeLimitedWithHandler:(id /* block */)a0;
- (void)isOBCSupportedWithHandler:(id /* block */)a0;
- (void)isSmartChargingCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)powerLogStatusWithHandler:(id /* block */)a0;
- (void)resetDevelopmentMode;
- (void)simulateCurrentOutputAsOfDate:(id)a0 overrideAllSignals:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)smartChargingUIStateWithHandler:(id /* block */)a0;
- (void)statusWithHandler:(id /* block */)a0;

@end
