@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (void)dispatchOnServer:(id /* block */)a0;
+ (BOOL)isLidClosed;
+ (void)_enumAllSubrequirements:(struct __ACMRequirement { } *)a0 processingBlock:(id /* block */)a1;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (void)_updateWithDFRStatus:(unsigned long long)a0 source:(id)a1;
+ (BOOL)dfrPresent;
+ (BOOL)deviceHasAtLeastSimulatedDFR;
+ (void)dispatchSyncOnMain:(id /* block */)a0;
+ (BOOL)deviceIsPoseidon;
+ (BOOL)deviceHasSpecialTouchID;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (void)_updateDFRStatus;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (BOOL)deviceHasTouchID;
+ (BOOL)deviceHasSecureDoublePressHW;
+ (unsigned long long)dfrStatus;
+ (BOOL)dfrHardwarePresent;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (BOOL)canCallToDependencies;
+ (BOOL)isClosedLidPreventingUseOfTouchID;
+ (BOOL)deviceHasSEP;
+ (BOOL)deviceHasSecureDFR;
+ (BOOL)isAppleSigned:(struct { unsigned int x0[8]; })a0;
+ (BOOL)deviceHasPearl;
+ (BOOL)deviceHasTouchIDAndSecureDoublePress;
+ (id)callerIdWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (BOOL)deviceHasDFR;

@end
