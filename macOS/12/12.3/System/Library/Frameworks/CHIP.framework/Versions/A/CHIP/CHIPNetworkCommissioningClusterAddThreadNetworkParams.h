@class NSData, NSNumber;

@interface CHIPNetworkCommissioningClusterAddThreadNetworkParams : NSObject

@property (retain, nonatomic) NSData *operationalDataset;
@property (retain, nonatomic) NSNumber *breadcrumb;
@property (retain, nonatomic) NSNumber *timeoutMs;

- (id)init;
- (void).cxx_destruct;

@end
