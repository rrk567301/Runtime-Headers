@class NSData, NSNumber;

@interface MTRNetworkCommissioningClusterNetworkInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *networkID;
@property (copy, nonatomic) NSNumber *connected;
@property (copy, nonatomic) NSData *networkIdentifier;
@property (copy, nonatomic) NSData *clientIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
