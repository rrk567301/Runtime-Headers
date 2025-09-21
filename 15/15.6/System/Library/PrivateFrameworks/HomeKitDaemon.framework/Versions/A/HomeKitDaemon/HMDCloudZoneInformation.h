@class NSUUID, NSString;

@interface HMDCloudZoneInformation : HMFObject <NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic, getter=didFetchFailed) char fetchFailed;
@property (nonatomic, getter=isFirstFetch) char firstFetch;
@property (nonatomic, getter=isZoneCreated) char zoneCreated;
@property (nonatomic) long long schemaVersion;
@property (nonatomic, getter=doesHandlesCloudRecord) char handlesCloudRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)cloudZoneInformationWithCloudZones:(id)a0;
+ (id)cloudZonesArrayWithCloudZones:(id)a0;
+ (id)cloudZonesWithDictionary:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)descriptionWithPointer:(char)a0;
- (id)emptyModelObjectWithChangeType:(unsigned long long)a0 parent:(id)a1;
- (id)initWithOwnerName:(id)a0 uuid:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 parent:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1 parent:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updateCloudZoneInformationWithModel:(id)a0 message:(id)a1;

@end
