@class NSXPCListener, NSString;

@interface PowerUISmartChargeManagerUnsupported : NSObject <NSXPCListenerDelegate, PowerUISmartChargeManaging>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)engageFrom:(id)a0 until:(id)a1 repeatUntil:(id)a2 overrideAllSignals:(BOOL)a3 withHandler:(id /* block */)a4;
- (void)powerLogStatusWithHandler:(id /* block */)a0;
- (void)isDEoCSupportedWithHandler:(id /* block */)a0;
- (void)isDEoCCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)client:(id)a0 setMCLLimit:(unsigned char)a1 withHandler:(id /* block */)a2;
- (void)legacy_isOBCEngagedWithHandler:(id /* block */)a0;
- (BOOL)isMCLSupported;
- (id)init;
- (void)tmpDisableMCLViaClient:(id)a0 withHandler:(id /* block */)a1;
- (void)isMCLSupportedWithHandler:(id /* block */)a0;
- (void)client:(id)a0 setState:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)isOBCEngagedOrChargeLimitedWithHandler:(id /* block */)a0;
- (void)client:(id)a0 setDEoCState:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)isOBCSupportedWithHandler:(id /* block */)a0;
- (void)setDesktopMode:(id)a0 withHandler:(id /* block */)a1;
- (void)currentRecommendedChargeLimitWithHandler:(id /* block */)a0;
- (void)smartChargingUIStateWithHandler:(id /* block */)a0;
- (void)fullChargeDeadlineWithHandler:(id /* block */)a0;
- (void)isMCLCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)resetDevelopmentMode;
- (void)isSmartChargingCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)simulateCurrentOutputAsOfDate:(id)a0 overrideAllSignals:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)statusWithHandler:(id /* block */)a0;
- (void)client:(id)a0 getMCLLimitWithHandler:(id /* block */)a1;
- (void)enterDevelopmentMode;
- (unsigned long long)currentChargeLimit;
- (void).cxx_destruct;
- (unsigned long long)currentRecommendedChargeLimit;
- (void)client:(id)a0 setChargingStatus:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)isCECSupportedWithHandler:(id /* block */)a0;

@end
