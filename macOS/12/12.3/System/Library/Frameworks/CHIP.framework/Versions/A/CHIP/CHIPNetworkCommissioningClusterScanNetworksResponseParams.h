@class NSNumber, NSString, NSArray;

@interface CHIPNetworkCommissioningClusterScanNetworksResponseParams : NSObject

@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *debugText;
@property (retain, nonatomic) NSArray *wifiScanResults;
@property (retain, nonatomic) NSArray *threadScanResults;

- (id)init;
- (void).cxx_destruct;

@end
