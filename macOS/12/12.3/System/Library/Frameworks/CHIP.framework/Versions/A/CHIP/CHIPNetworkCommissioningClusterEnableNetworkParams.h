@class NSData, NSNumber;

@interface CHIPNetworkCommissioningClusterEnableNetworkParams : NSObject

@property (retain, nonatomic) NSData *networkID;
@property (retain, nonatomic) NSNumber *breadcrumb;
@property (retain, nonatomic) NSNumber *timeoutMs;

- (id)init;
- (void).cxx_destruct;

@end
