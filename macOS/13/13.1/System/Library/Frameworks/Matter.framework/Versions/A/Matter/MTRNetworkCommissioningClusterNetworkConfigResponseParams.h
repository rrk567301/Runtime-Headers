@class NSNumber, NSString;

@interface MTRNetworkCommissioningClusterNetworkConfigResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *networkingStatus;
@property (copy, nonatomic) NSString *debugText;
@property (copy, nonatomic) NSNumber *networkIndex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
