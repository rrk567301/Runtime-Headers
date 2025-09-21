@class AVB17221AEMEntity, AVBATDECCController, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface AVBATDECCEntity : NSObject {
    NSMutableArray *_interfaces;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _interfacesLock;
    NSObject<OS_dispatch_source> *_registrationTimer;
    char _sendTimedRegistrations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _acquireLock;
    int _acquireCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockLock;
    int _lockCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *controllerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *aecpQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *aecpLimiter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *acmpQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *acmpLimiter;
@property (readonly) char supportsAppleAEMExtensionProtocol;
@property (nonatomic) char supportsMilan;
@property (nonatomic) unsigned int milanProtocolVersion;
@property (nonatomic) char unsolicitedRegistrationFailed;
@property (readonly, nonatomic) char supportsLockEntity;
@property (readonly, nonatomic) char supportsAcquireEntity;
@property (readonly, nonatomic) unsigned long long entityID;
@property (readonly, retain, nonatomic) AVB17221AEMEntity *entityModel;
@property (weak, nonatomic) AVBATDECCController *entityController;
@property (nonatomic, getter=isAcquired) char acquired;
@property (nonatomic, getter=isLocked) char locked;
@property (nonatomic, getter=isConnected) char connected;
@property (nonatomic) char acquiredByThisController;
@property (nonatomic) char acquiredByAnotherController;
@property (nonatomic) unsigned long long acquiredControllerEntityID;
@property (nonatomic) char lockedByThisController;
@property (nonatomic) char lockedByAnotherController;
@property (nonatomic) unsigned long long lockedControllerEntityID;
@property (nonatomic) char registeredForUnsolicitedNotifications;

+ (id)keyPathsForValuesAffectingSupportsAppleAEMExtensionProtocol;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isDirectlyConnectedOnInterface:(id)a0;
- (char)_connectListenerEntityID:(unsigned long long)a0 uniqueID:(unsigned short)a1 fromTalkerEntityID:(unsigned long long)a2 uniqueID:(unsigned short)a3 streamingWait:(char)a4 classB:(char)a5 onInterface:(id)a6 withCompletionHandler:(id /* block */)a7;
- (char)_disconnectListenerEntityID:(unsigned long long)a0 uniqueID:(unsigned short)a1 fromTalkerEntityID:(unsigned long long)a2 uniqueID:(unsigned short)a3 onInterface:(id)a4 withCompletionHandler:(id /* block */)a5;
- (char)acquireResultStatus:(unsigned char *)a0 acquiredControllerID:(unsigned long long *)a1 onInterface:(id)a2;
- (char)addEntity:(id)a0 andInterface:(id)a1;
- (void)addressAccessReadAtAddress:(unsigned long long)a0 ofLength:(unsigned long long)a1 appendToData:(id)a2 onInterface:(id)a3 withCompletion:(id /* block */)a4;
- (id)aecpAEMCommandMessageForCommandType:(unsigned short)a0;
- (id)appleAAECommandMessageForCommandType:(unsigned short)a0;
- (void)checkForMilanOnInterface:(id)a0;
- (char)connectInputStreamWithUniqueIndex:(unsigned short)a0 toTalkerEntityID:(unsigned long long)a1 uniqueID:(unsigned short)a2 streamingWait:(char)a3 classB:(char)a4 onInterface:(id)a5 withCompletionHandler:(id /* block */)a6;
- (char)connectOutputStreamWithUniqueIndex:(unsigned short)a0 toListenerEntityID:(unsigned long long)a1 uniqueID:(unsigned short)a2 streamingWait:(char)a3 classB:(char)a4 onInterface:(id)a5 withCompletionHandler:(id /* block */)a6;
- (char)deregisterForUnsolicitedNotificationsOnInterface:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)directReadDescriptorOfType:(unsigned short)a0 withID:(unsigned short)a1 inConfiguration:(unsigned short)a2 onInterface:(id)a3 withCompletionHandler:(id /* block */)a4;
- (char)disconnectInputStreamWithUniqueIndex:(unsigned short)a0 fromTalkerEntityID:(unsigned long long)a1 uniqueID:(unsigned short)a2 onInterface:(id)a3 withCompletionHandler:(id /* block */)a4;
- (char)disconnectOutputStreamWithUniqueIndex:(unsigned short)a0 fromListenerEntityID:(unsigned long long)a1 uniqueID:(unsigned short)a2 onInterface:(id)a3 withCompletionHandler:(id /* block */)a4;
- (id)entityForInterface:(id)a0;
- (char)enumerateIfNecessaryOnInterface:(id)a0;
- (char)enumerateOnInterface:(id)a0;
- (char)fetchCurrentConfiguration:(unsigned short *)a0 onInterface:(id)a1;
- (char)getInputStreamStateWithUniqueIndex:(unsigned short)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (char)getOutputStreamConnectionWithUniqueIndex:(unsigned short)a0 andConnectionIndex:(unsigned short)a1 onInterface:(id)a2 withCompletionHandler:(id /* block */)a3;
- (char)getOutputStreamStateWithUniqueIndex:(unsigned short)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (char)hasInterfacesOtherThanInterface:(id)a0;
- (id)initWithEntity:(id)a0 andInterface:(id)a1;
- (id)interfacesOtherThanInterface:(id)a0;
- (char)localInterfaceMatchesRemoteInterfaceDescriptorWithID:(unsigned short)a0 inConfiguration:(unsigned short)a1 onInterface:(id)a2;
- (char)localInterfaceMatchesRemoteInterfaceObject:(id)a0 onInterface:(id)a1;
- (char)lockResultStatus:(unsigned char *)a0 lockedControllerID:(unsigned long long *)a1 onInterface:(id)a2;
- (void)logReadDescriptorFailureOfType:(unsigned short)a0 index:(unsigned short)a1 configuration:(unsigned short)a2 withError:(unsigned char)a3 fromMethodName:(const char *)a4;
- (unsigned short)numberOfAVBInterfacesFromConfigurationID:(unsigned short)a0 onInterface:(id)a1;
- (char)readCurrentConfigurationFromEntityDescriptor:(unsigned short *)a0 onInterface:(id)a1;
- (void)readMemoryObject:(id)a0 onInterface:(id)a1 withCompletion:(id /* block */)a2;
- (char)registerForUnsolicitedNotificationsTimeLimited:(char)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (char)relinquishOnInterface:(id)a0;
- (char)removeInterfaceAnyLeft:(id)a0;
- (char)sendACMPMessage:(id)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (char)sendAECPMessage:(id)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (char)sendAECPVendorCommandMessage:(id)a0 withTimeout:(long long)a1 onInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)setEntityModel:(id)a0 onInterface:(id)a1;
- (char)unlockOnInterface:(id)a0;

@end
