@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (BOOL)deviceHasDFR;
+ (BOOL)deviceHasPearl;
+ (BOOL)deviceHasTouchID;
+ (BOOL)isLidClosed;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (BOOL)deviceHasSEP;
+ (BOOL)deviceHasSecureDFR;
+ (void)_enumAllSubrequirements:(struct __ACMRequirement { } *)a0 processingBlock:(id /* block */)a1;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (BOOL)isClosedLidPreventingUseOfTouchID;
+ (BOOL)isAppleSigned:(struct { unsigned int x0[8]; })a0;
+ (BOOL)canShowUiInCurrentSession:(id *)a0;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (BOOL)deviceHasSpecialTouchID;
+ (void)dispatchSyncOnMain:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;

@end
