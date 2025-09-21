@class MPPlaybackArchive, NSSet, HMDMediaPlaybackActionAsCharacteristicWriteRequests, HMDHome, NSString, NSNumber;

@interface HMDMediaPlaybackAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) HMDHome *home;
@property (copy, nonatomic) NSSet *mediaProfiles;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSSet *profileUUIDs;
@property (readonly, copy) HMDMediaPlaybackActionAsCharacteristicWriteRequests *convertedCharacteristicWriteRequests;
@property (nonatomic) char encodePlaybackArchiveForExecution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;
+ (char)isPlaybackActionValidWithProfiles:(id)a0 state:(long long)a1 volume:(id)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (id)validate;
- (Class)modelClass;
- (void)_processPlaybackActionModelUpdated:(id)a0 message:(id)a1;
- (id)associatedAccessories;
- (void)configureWithHome:(id)a0;
- (void)executeWithSource:(unsigned long long)a0 clientName:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;
- (id)initWithUUID:(id)a0 mediaProfiles:(id)a1 playbackState:(long long)a2 volume:(id)a3 playbackArchive:(id)a4 actionSet:(id)a5;
- (char)isAssociatedWithAccessory:(id)a0;
- (char)isCompatibleWithAction:(id)a0;
- (char)isStaleWithAccessory:(id)a0;
- (char)isUnsecuringAction;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)modelObjectWithUpdatedMediaProfiles:(id)a0;
- (id)stateDump;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;

@end
