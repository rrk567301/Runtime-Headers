@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (BOOL)isAppleSigned:(struct { unsigned int x0[8]; })a0;
+ (BOOL)deviceHasSpecialTouchID;
+ (BOOL)deviceHasTouchID;
+ (BOOL)deviceHasSecureDoublePressHW;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (BOOL)canCallToDependencies;
+ (id)callerIdWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (BOOL)deviceHasTouchIDAndSecureDoublePress;
+ (void)_enumAllSubrequirements:(struct __ACMRequirement { } *)a0 processingBlock:(id /* block */)a1;
+ (BOOL)deviceHasAtLeastSimulatedDFR;
+ (unsigned long long)dfrStatus;
+ (BOOL)deviceHasDFR;
+ (BOOL)isLidClosed;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (BOOL)dfrPresent;
+ (BOOL)dfrHardwarePresent;
+ (BOOL)deviceHasSEP;
+ (BOOL)deviceHasPearl;
+ (BOOL)deviceIsPoseidon;
+ (void)_updateDFRStatus;
+ (BOOL)deviceHasSecureDFR;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (void)_updateWithDFRStatus:(unsigned long long)a0 source:(id)a1;
+ (void)dispatchOnServer:(id /* block */)a0;
+ (BOOL)isClosedLidPreventingUseOfTouchID;
+ (void)dispatchSyncOnMain:(id /* block */)a0;

@end
