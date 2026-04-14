@class NSNumber;

@interface MTRCommissionerControlClusterCommissioningRequestResultEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *requestId;
@property (copy, nonatomic) NSNumber *clientNodeId;
@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
