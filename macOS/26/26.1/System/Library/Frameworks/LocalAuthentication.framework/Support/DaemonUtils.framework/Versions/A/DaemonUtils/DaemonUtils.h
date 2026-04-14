@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (BOOL)isAppleSigned:(struct { unsigned int x0[8]; })a0;
+ (BOOL)deviceHasSEP;
+ (void)_updateDFRStatus;
+ (BOOL)deviceHasSpecialTouchID;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (BOOL)deviceHasDFR;
+ (BOOL)deviceHasAtLeastSimulatedDFR;
+ (unsigned long long)dfrStatus;
+ (BOOL)dfrHardwarePresent;
+ (BOOL)deviceHasPearl;
+ (BOOL)isLidClosed;
+ (BOOL)isClosedLidPreventingUseOfTouchID;
+ (void)dispatchOnServer:(id /* block */)a0;
+ (BOOL)deviceHasSecureDoublePressHW;
+ (void)_updateWithDFRStatus:(unsigned long long)a0 source:(id)a1;
+ (id)callerIdWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (void)dispatchSyncOnMain:(id /* block */)a0;
+ (void)_enumAllSubrequirements:(struct __ACMRequirement { } *)a0 processingBlock:(id /* block */)a1;
+ (BOOL)deviceHasTouchIDAndSecureDoublePress;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (BOOL)deviceHasSecureDFR;
+ (BOOL)deviceIsPoseidon;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (BOOL)deviceHasTouchID;
+ (BOOL)canCallToDependencies;
+ (BOOL)dfrPresent;

@end
