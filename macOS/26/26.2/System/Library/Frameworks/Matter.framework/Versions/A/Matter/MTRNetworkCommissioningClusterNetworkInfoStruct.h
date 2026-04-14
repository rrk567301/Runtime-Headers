@class NSData, NSNumber;

@interface MTRNetworkCommissioningClusterNetworkInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *networkID;
@property (copy, nonatomic) NSNumber *connected;
@property (copy, nonatomic) NSData *networkIdentifier;
@property (copy, nonatomic) NSData *clientIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
