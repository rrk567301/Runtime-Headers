@class NSNumber;

@interface MTRCommissionerControlClusterCommissioningRequestResultEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *requestID;
@property (copy, nonatomic) NSNumber *clientNodeID;
@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
