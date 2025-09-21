@class NSArray, DMManager, NSObject;
@protocol OS_dispatch_queue;

@interface LACAirDB : NSObject {
    NSArray *_users;
    DMManager *_diskMgr;
    id _daSession;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_currentRecoveryVolumeUUID;

- (id)init;
- (BOOL)loadWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_deserializeRecoveryCredential:(id)a0 password:(id *)a1 userGuid:(id *)a2 volumeUuid:(id *)a3 tryAllVolumes:(BOOL *)a4 error:(id *)a5;
- (id)_deviceNodeForDisk:(struct __DADisk { } *)a0;
- (id)_deviceNodeForVolumeWithUUID:(id)a0;
- (id)_loadKEKforUuid:(id)a0 deviceNode:(id)a1;
- (id)_loadVEKforVolume:(id)a0;
- (BOOL)findAndVerifyUserWithUuid:(id)a0 volumeUuid:(id)a1 tryAllVolumes:(BOOL)a2 error:(id *)a3 verificationBlock:(id /* block */)a4;
- (BOOL)loadWithUuid:(id)a0 error:(id *)a1;
- (id)users:(BOOL)a0 ownersOnly:(BOOL)a1;
- (BOOL)verifyRecoveryCredential:(id)a0 externalizedContext:(id)a1 bootPolicy:(BOOL)a2 error:(id *)a3;
- (id)volumeNameForDeviceNode:(id)a0 error:(id *)a1;

@end
