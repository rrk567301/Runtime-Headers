@class NSXPCListener, NSString;

@interface PowerUISmartChargeManagerUnsupported : NSObject <NSXPCListenerDelegate, PowerUISmartChargeManaging>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (BOOL)isMCLSupported;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)isOBCSupportedWithHandler:(id /* block */)a0;
- (void)isOBCEngagedOrChargeLimitedWithHandler:(id /* block */)a0;
- (void)client:(id)a0 setState:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)legacy_isOBCEngagedWithHandler:(id /* block */)a0;
- (unsigned long long)currentChargeLimit;
- (void)isSmartChargingCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)smartChargingUIStateWithHandler:(id /* block */)a0;
- (void)client:(id)a0 setDEoCState:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)statusWithHandler:(id /* block */)a0;
- (void)isDEoCCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resetDevelopmentMode;
- (unsigned long long)currentRecommendedChargeLimit;
- (void)enterDevelopmentMode;
- (void)tmpDisableMCLViaClient:(id)a0 withHandler:(id /* block */)a1;
- (void)client:(id)a0 setMCLLimit:(unsigned char)a1 withHandler:(id /* block */)a2;
- (void)isMCLCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)client:(id)a0 getMCLLimitWithHandler:(id /* block */)a1;
- (void)setDesktopMode:(id)a0 withHandler:(id /* block */)a1;
- (void)simulateCurrentOutputAsOfDate:(id)a0 overrideAllSignals:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)isDEoCSupportedWithHandler:(id /* block */)a0;
- (id)init;
- (void)engageFrom:(id)a0 until:(id)a1 repeatUntil:(id)a2 overrideAllSignals:(BOOL)a3 withHandler:(id /* block */)a4;
- (void)isMCLSupportedWithHandler:(id /* block */)a0;
- (void)currentRecommendedChargeLimitWithHandler:(id /* block */)a0;
- (void)fullChargeDeadlineWithHandler:(id /* block */)a0;
- (void)powerLogStatusWithHandler:(id /* block */)a0;
- (void)client:(id)a0 setChargingStatus:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)isCECSupportedWithHandler:(id /* block */)a0;

@end
