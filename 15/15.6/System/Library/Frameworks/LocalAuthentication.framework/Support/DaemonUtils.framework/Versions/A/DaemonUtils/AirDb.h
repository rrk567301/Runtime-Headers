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
- (char)loadWithError:(id *)a0;
- (char)_deserializeRecoveryCredential:(id)a0 password:(id *)a1 userGuid:(id *)a2 volumeUuid:(id *)a3 tryAllVolumes:(char *)a4 error:(id *)a5;
- (id)deviceNodeForDisk:(struct __DADisk { } *)a0;
- (id)deviceNodeForVolumeWithUUID:(id)a0;
- (char)findAndVerifyUserWithUuid:(id)a0 volumeUuid:(id)a1 tryAllVolumes:(char)a2 error:(id *)a3 verificationBlock:(id /* block */)a4;
- (id)loadKEKforUuid:(id)a0 deviceNode:(id)a1;
- (id)loadVEKforVolume:(id)a0;
- (char)loadWithUuid:(id)a0 error:(id *)a1;
- (id)users:(char)a0 ownersOnly:(char)a1;
- (char)verifyRecoveryCredential:(id)a0 externalizedContext:(id)a1 bootPolicy:(char)a2 error:(id *)a3;
- (id)volumeNameForDeviceNode:(id)a0 error:(id *)a1;

@end
