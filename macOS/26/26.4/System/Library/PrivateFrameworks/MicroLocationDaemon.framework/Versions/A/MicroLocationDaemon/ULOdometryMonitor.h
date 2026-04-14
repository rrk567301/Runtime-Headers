@class NSString, ULOdometryProvider;

@interface ULOdometryMonitor : ULEventMonitor <ULOdometryProviderDelegate>

@property (retain, nonatomic) ULOdometryProvider *NPDROdometryProvider;
@property (retain, nonatomic) ULOdometryProvider *CMOdometryProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCMOdometryAvailable;
+ (BOOL)isNPDROdometryAvailable;

- (void).cxx_destruct;
- (void)stopMonitoring:(id)a0;
- (void)startMonitoring:(id)a0;
- (void)didReceiveOdometryErrorWithSender:(id)a0 odometryStatus:(id)a1 sourceType:(long long)a2 error:(id)a3 date:(id)a4;
- (void)didReceiveOdometryProviderWithSender:(id)a0 isAvailable:(BOOL)a1;
- (void)didReceiveOdometryUpdateWithSender:(id)a0 odometryStatus:(id)a1 uuid:(id)a2;

@end
