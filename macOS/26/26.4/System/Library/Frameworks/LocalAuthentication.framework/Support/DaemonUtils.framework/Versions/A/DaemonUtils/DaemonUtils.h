@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (BOOL)isAppleSigned:(struct { unsigned int x0[8]; })a0;
+ (BOOL)deviceHasPearl;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (BOOL)deviceHasSecureDFR;
+ (void)_enumAllSubrequirements:(struct __ACMRequirement { } *)a0 processingBlock:(id /* block */)a1;
+ (BOOL)canCallToDependencies;
+ (void)dispatchOnServer:(id /* block */)a0;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (void)dispatchSyncOnMain:(id /* block */)a0;
+ (BOOL)deviceHasTouchIDAndSecureDoublePress;
+ (BOOL)dfrPresent;
+ (BOOL)isLidClosed;
+ (void)_updateDFRStatus;
+ (BOOL)deviceHasDFR;
+ (BOOL)deviceHasSEP;
+ (BOOL)dfrHardwarePresent;
+ (BOOL)deviceHasTouchID;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (id)callerIdWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (unsigned long long)dfrStatus;
+ (BOOL)deviceHasAtLeastSimulatedDFR;
+ (BOOL)isClosedLidPreventingUseOfTouchID;
+ (BOOL)deviceHasSecureDoublePressHW;
+ (BOOL)deviceHasSpecialTouchID;
+ (BOOL)deviceIsPoseidon;
+ (void)_updateWithDFRStatus:(unsigned long long)a0 source:(id)a1;

@end
