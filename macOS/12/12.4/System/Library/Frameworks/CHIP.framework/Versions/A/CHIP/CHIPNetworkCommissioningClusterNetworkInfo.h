@class NSData, NSNumber;

@interface CHIPNetworkCommissioningClusterNetworkInfo : NSObject

@property (retain, nonatomic) NSData *networkID;
@property (retain, nonatomic) NSNumber *connected;

- (id)init;
- (void).cxx_destruct;

@end
