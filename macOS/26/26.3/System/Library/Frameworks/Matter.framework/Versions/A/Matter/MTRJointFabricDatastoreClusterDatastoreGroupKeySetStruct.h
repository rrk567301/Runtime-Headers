@class NSNumber, NSData;

@interface MTRJointFabricDatastoreClusterDatastoreGroupKeySetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupKeySetID;
@property (copy, nonatomic) NSNumber *groupKeySecurityPolicy;
@property (copy, nonatomic) NSData *epochKey0;
@property (copy, nonatomic) NSNumber *epochStartTime0;
@property (copy, nonatomic) NSData *epochKey1;
@property (copy, nonatomic) NSNumber *epochStartTime1;
@property (copy, nonatomic) NSData *epochKey2;
@property (copy, nonatomic) NSNumber *epochStartTime2;
@property (copy, nonatomic) NSNumber *groupKeyMulticastPolicy;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
