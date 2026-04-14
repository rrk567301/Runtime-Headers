@class NSData, NSNumber;

@interface CHIPNetworkCommissioningClusterReorderNetworkParams : NSObject

@property (retain, nonatomic) NSData *networkID;
@property (retain, nonatomic) NSNumber *networkIndex;
@property (retain, nonatomic) NSNumber *breadcrumb;

- (id)init;
- (void).cxx_destruct;

@end
