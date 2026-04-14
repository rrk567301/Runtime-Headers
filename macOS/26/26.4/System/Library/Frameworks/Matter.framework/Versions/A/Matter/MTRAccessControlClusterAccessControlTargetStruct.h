@class NSNumber;

@interface MTRAccessControlClusterAccessControlTargetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *cluster;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *deviceType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
