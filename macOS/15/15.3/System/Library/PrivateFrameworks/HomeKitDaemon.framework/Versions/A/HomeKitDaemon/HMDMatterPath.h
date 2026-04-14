@class NSUUID, MTRAttributePath, MTREventPath, MTRClusterPath, NSString, MTRCommandPath, HMDAccessory, NSNumber;

@interface HMDMatterPath : HMFObject <HMFLogging, NSCopying, NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSNumber *endpointID;
@property (readonly, nonatomic) NSNumber *clusterID;
@property (readonly, nonatomic) NSNumber *attributeID;
@property (readonly, nonatomic) NSNumber *commandID;
@property (readonly, nonatomic) NSNumber *eventID;
@property (readonly, nonatomic) MTRClusterPath *clusterPath;
@property (readonly, nonatomic) MTRAttributePath *attributePath;
@property (readonly, nonatomic) MTRCommandPath *commandPath;
@property (readonly, nonatomic) MTREventPath *eventPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)PathWithCommandID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
+ (id)PathWithMTRPath:(id)a0;
+ (id)PathWithAttributeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
+ (id)PathWithEventID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)path;
- (id)shortDescription;
- (id)logIdentifier;
- (id)mtrPath;
- (id)initWithPathModel:(id)a0 accessory:(id)a1;
- (id)initWithUUID:(id)a0 mtrPath:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;
- (void)populateModelObject:(id)a0;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;

@end
