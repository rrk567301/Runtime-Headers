@class NSNumber, NSString, NSArray;

@interface CHIPNetworkCommissioningClusterScanNetworksResponseParams : NSObject

@property (retain, nonatomic) NSNumber *networkingStatus;
@property (retain, nonatomic) NSString *debugText;
@property (retain, nonatomic) NSArray *wiFiScanResults;
@property (retain, nonatomic) NSArray *threadScanResults;

- (id)init;
- (void).cxx_destruct;

@end
