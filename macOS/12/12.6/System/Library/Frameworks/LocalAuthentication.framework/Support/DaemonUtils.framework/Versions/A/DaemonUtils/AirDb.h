@class NSArray, DMManager, NSObject;
@protocol OS_dispatch_queue;

@interface AirDb : NSObject {
    NSArray *_users;
    DMManager *_diskMgr;
    id _daSession;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)currentRecoveryVolumeUUID;

- (id)init;
- (void).cxx_destruct;
- (BOOL)loadWithError:(id)a0 error:(id *)a1;
- (id)deviceNodeForDisk:(struct __DADisk { } *)a0;
- (BOOL)_deserializeRecoveryCredential:(id)a0 password:(id *)a1 userGuid:(id *)a2 volumeUuid:(id *)a3 tryAllVolumes:(BOOL *)a4 error:(id *)a5;
- (id)deviceNodeForVolumeWithUUID:(id)a0;
- (id)loadKEKforUuid:(id)a0 deviceNode:(id)a1;
- (id)loadVEKforVolume:(id)a0;
- (id)users:(BOOL)a0 ownersOnly:(BOOL)a1;
- (BOOL)loadWithError:(id *)a0;
- (id)volumeNameForDeviceNode:(id)a0 error:(id *)a1;
- (BOOL)verifyRecoveryCredential:(id)a0 externalizedContext:(id)a1 bootPolicy:(BOOL)a2 error:(id *)a3;

@end
