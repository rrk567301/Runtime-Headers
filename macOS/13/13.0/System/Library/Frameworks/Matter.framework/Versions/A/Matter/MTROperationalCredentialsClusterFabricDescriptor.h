@class NSData, NSNumber, NSString;

@interface MTROperationalCredentialsClusterFabricDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSData *rootPublicKey;
@property (copy, nonatomic) NSNumber *vendorId;
@property (copy, nonatomic) NSNumber *fabricId;
@property (copy, nonatomic) NSNumber *nodeId;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
