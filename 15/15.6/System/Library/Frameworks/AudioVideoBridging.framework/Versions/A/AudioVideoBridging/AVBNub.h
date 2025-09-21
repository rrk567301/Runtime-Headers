@class AVBPTPClock, IOKService, AVBPTPInstance, IOKConnection, NSObject, TSgPTPClock;
@protocol OS_dispatch_queue;

@interface AVBNub : NSObject {
    NSObject<OS_dispatch_queue> *_domainQueue;
    IOKService *_service;
    IOKConnection *_connection;
    TSgPTPClock *_avbDomain;
    AVBPTPClock *_avbPTPClock0;
    AVBPTPInstance *_avbPTPInstance0;
}

@property (readonly) unsigned long long myEntityID;
@property (readonly) unsigned long long dynamicBaseID;
@property (readonly, nonatomic) unsigned long long avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) unsigned long long localClockIdentifier;
@property (readonly, nonatomic) AVBPTPClock *avbPTPClock0;
@property (readonly, nonatomic) AVBPTPInstance *avbPTPInstance0;
@property (readonly) TSgPTPClock *avbDomain;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)avbNub;
+ (id)bridgeNameFromBridgeID:(unsigned long long)a0;
+ (char)deviceSupportsAVBControl;
+ (char)deviceSupportsAVBStreaming;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)localizedDescriptionForAcquireModeError:(id)a0;
+ (id)localizedDescriptionForAcquisitionFailure:(unsigned int)a0;
+ (void)notifyWhenNubIsAvailable:(id /* block */)a0;
+ (id)sharedNub;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (char)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (char)logInterfaceStatisticsWithError:(id *)a0;
- (char)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (char)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (char)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (char)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (char)_addAVB0Instance;
- (char)add17221ACMPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (char)add17221ADPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (char)add17221AECPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (char)add1722MAAPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (char)addAVBClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (char)addClockSyncForIdentifier:(unsigned long long)a0 clientIdentifier:(unsigned int *)a1 error:(id *)a2;
- (char)addMSRPClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (char)addMVRPClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (char)addRequireTimeSyncToInterfaceNamed:(id)a0 error:(id *)a1;
- (char)addStreamCaptureOnInterfaceNamed:(id)a0 error:(id *)a1;
- (char)addTimeSyncCaptureOnInterfaceNamed:(id)a0 error:(id *)a1;
- (char)addTimeSyncToInterfaceNamed:(id)a0 error:(id *)a1;
- (char)addTranslationClockError:(id *)a0;
- (char)callClientCommand:(int)a0 withName:(id)a1 withInterfaceNamed:(id)a2 error:(id *)a3;
- (unsigned long long)dynamicBaseID;
- (char)getDynamicBaseID:(unsigned long long *)a0 error:(id *)a1;
- (char)getMyEntityID:(unsigned long long *)a0 error:(id *)a1;
- (unsigned long long)myEntityID;
- (char)nextAvailableDynamicEntityID:(unsigned long long *)a0 error:(id *)a1;
- (char)nextAvailableDynamicEntityModelID:(unsigned long long *)a0 error:(id *)a1;
- (char)releaseDynamicEntityID:(unsigned long long)a0 error:(id *)a1;
- (char)releaseDynamicEntityModelID:(unsigned long long)a0 error:(id *)a1;
- (char)remove17221ACMPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)remove17221ADPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)remove17221AECPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)remove1722MAAPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)removeAVBClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)removeClockSyncForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (char)removeMSRPClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)removeMVRPClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)removeRequireTimeSyncFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)removeStreamCaptureOnInterfaceNamed:(id)a0 error:(id *)a1;
- (char)removeTimeSyncCaptureOnInterfaceNamed:(id)a0 error:(id *)a1;
- (char)removeTimeSyncFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)removeTranslationClockError:(id *)a0;
- (char)wantsAudioDriver:(char)a0 withError:(id *)a1;

@end
