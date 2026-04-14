@class TSgPTPClock, IOKConnection, NSObject, IOKService;
@protocol OS_dispatch_queue;

@interface AVBNub : NSObject {
    NSObject<OS_dispatch_queue> *_domainQueue;
    TSgPTPClock *_avbDomain;
    IOKService *_service;
    IOKConnection *_connection;
}

@property (readonly) unsigned long long myEntityID;
@property (readonly) unsigned long long dynamicBaseID;
@property (readonly) TSgPTPClock *avbDomain;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)sharedNub;
+ (id)avbNub;
+ (void)notifyWhenNubIsAvailable:(id /* block */)a0;
+ (BOOL)deviceSupportsAVBStreaming;
+ (BOOL)deviceSupportsAVBControl;
+ (id)localizedDescriptionForAcquisitionFailure:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)add17221ACMPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove17221ACMPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add17221AECPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove17221AECPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)nextAvailableDynamicEntityID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)releaseDynamicEntityID:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)myEntityID;
- (BOOL)addMVRPClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addMSRPClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add17221ADPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add1722MAAPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addAVBClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeAVBClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeMVRPClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeMSRPClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove17221ADPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove1722MAAPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)callClientCommand:(int)a0 withName:(id)a1 withInterfaceNamed:(id)a2 error:(id *)a3;
- (BOOL)getMyEntityID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)getDynamicBaseID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addTimeSyncToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeTimeSyncFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addRequireTimeSyncToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeRequireTimeSyncFromInterfaceNamed:(id)a0 error:(id *)a1;
- (unsigned long long)dynamicBaseID;
- (BOOL)nextAvailableDynamicEntityModelID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)releaseDynamicEntityModelID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)wantsAudioDriver:(BOOL)a0 withError:(id *)a1;
- (BOOL)activateAVBOnInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)deactivateAVBOnInterfaceNamed:(id)a0 error:(id *)a1;

@end
