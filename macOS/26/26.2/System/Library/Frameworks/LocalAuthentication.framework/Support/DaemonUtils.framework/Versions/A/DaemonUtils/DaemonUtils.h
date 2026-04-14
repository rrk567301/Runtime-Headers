@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (void)_updateDFRStatus;
+ (BOOL)canCallToDependencies;
+ (BOOL)deviceHasTouchID;
+ (BOOL)deviceHasSpecialTouchID;
+ (void)dispatchOnServer:(id /* block */)a0;
+ (BOOL)deviceIsPoseidon;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (void)_enumAllSubrequirements:(struct __ACMRequirement { } *)a0 processingBlock:(id /* block */)a1;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (id)callerIdWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (BOOL)deviceHasSecureDFR;
+ (BOOL)deviceHasSEP;
+ (unsigned long long)dfrStatus;
+ (BOOL)isAppleSigned:(struct { unsigned int x0[8]; })a0;
+ (BOOL)isLidClosed;
+ (BOOL)deviceHasDFR;
+ (BOOL)deviceHasPearl;
+ (void)_updateWithDFRStatus:(unsigned long long)a0 source:(id)a1;
+ (BOOL)deviceHasAtLeastSimulatedDFR;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (BOOL)deviceHasSecureDoublePressHW;
+ (void)dispatchSyncOnMain:(id /* block */)a0;
+ (BOOL)deviceHasTouchIDAndSecureDoublePress;
+ (BOOL)dfrHardwarePresent;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (BOOL)isClosedLidPreventingUseOfTouchID;
+ (BOOL)dfrPresent;

@end
