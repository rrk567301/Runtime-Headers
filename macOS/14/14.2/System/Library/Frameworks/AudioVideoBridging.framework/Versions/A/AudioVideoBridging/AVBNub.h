@class IOKService, NSString, IOKConnection, NSObject, TSgPTPClock;
@protocol OS_dispatch_queue;

@interface AVBNub : NSObject <TSClockManagerClient> {
    NSObject<OS_dispatch_queue> *_domainQueue;
    TSgPTPClock *_avbDomain;
    IOKService *_service;
    IOKConnection *_connection;
}

@property (readonly) unsigned long long myEntityID;
@property (readonly) unsigned long long dynamicBaseID;
@property (readonly) TSgPTPClock *avbDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avbNub;
+ (BOOL)deviceSupportsAVBControl;
+ (BOOL)deviceSupportsAVBStreaming;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)localizedDescriptionForAcquireModeError:(id)a0;
+ (id)localizedDescriptionForAcquisitionFailure:(unsigned int)a0;
+ (void)notifyWhenNubIsAvailable:(id /* block */)a0;
+ (id)sharedNub;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)interruptedConnectionForClockManager:(id)a0;
- (BOOL)activateAVBOnInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add17221ACMPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add17221ADPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add17221AECPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add1722MAAPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addAVBClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addMSRPClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addMVRPClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addRequireTimeSyncToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addTimeSyncToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)callClientCommand:(int)a0 withName:(id)a1 withInterfaceNamed:(id)a2 error:(id *)a3;
- (BOOL)deactivateAVBOnInterfaceNamed:(id)a0 error:(id *)a1;
- (unsigned long long)dynamicBaseID;
- (BOOL)getDynamicBaseID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)getMyEntityID:(unsigned long long *)a0 error:(id *)a1;
- (unsigned long long)myEntityID;
- (BOOL)nextAvailableDynamicEntityID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)nextAvailableDynamicEntityModelID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)releaseDynamicEntityID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)releaseDynamicEntityModelID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)remove17221ACMPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove17221ADPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove17221AECPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove1722MAAPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeAVBClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeMSRPClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeMVRPClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeRequireTimeSyncFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeTimeSyncFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)wantsAudioDriver:(BOOL)a0 withError:(id *)a1;

@end
