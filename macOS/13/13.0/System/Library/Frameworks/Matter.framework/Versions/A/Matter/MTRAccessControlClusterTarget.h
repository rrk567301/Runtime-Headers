@class NSNumber;

@interface MTRAccessControlClusterTarget : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *cluster;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *deviceType;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
