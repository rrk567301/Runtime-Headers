@class NSData, NSNumber;

@interface CHIPNetworkCommissioningClusterRemoveNetworkParams : NSObject

@property (retain, nonatomic) NSData *networkID;
@property (retain, nonatomic) NSNumber *breadcrumb;
@property (retain, nonatomic) NSNumber *timeoutMs;

- (id)init;
- (void).cxx_destruct;

@end
