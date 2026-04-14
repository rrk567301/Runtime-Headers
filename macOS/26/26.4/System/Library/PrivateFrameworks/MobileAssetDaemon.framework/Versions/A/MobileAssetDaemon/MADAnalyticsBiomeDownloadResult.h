@class NSString;

@interface MADAnalyticsBiomeDownloadResult : NSObject

@property (readonly, nonatomic) BOOL cellularRequest;
@property (readonly, nonatomic) BOOL cellularResponse;
@property (readonly, nonatomic) BOOL constrainedNetworkRequest;
@property (readonly, nonatomic) BOOL constrainedNetworkResponse;
@property (readonly, nonatomic) BOOL expensiveNetworkRequest;
@property (readonly, nonatomic) BOOL expensiveNetworkResponse;
@property (readonly, nonatomic) BOOL isMAAutoAsset;
@property (readonly, nonatomic) BOOL isDiscretionary;
@property (readonly, nonatomic) BOOL isUserPriority;
@property (readonly, nonatomic) NSString *result;
@property (readonly, nonatomic) long long bytesDownloaded;
@property (readonly, nonatomic) BOOL isPSUS;

- (id)dictRepresentation;
- (void).cxx_destruct;
- (id)initWithCellularRequest:(BOOL)a0 cellularResponse:(BOOL)a1 constrainedNetworkRequest:(BOOL)a2 constrainedNetworkResponse:(BOOL)a3 expensiveNetworkRequest:(BOOL)a4 expensiveNetworkResponse:(BOOL)a5 isMAAutoAsset:(BOOL)a6 isDiscretionary:(BOOL)a7 isUserPriority:(BOOL)a8 result:(id)a9 bytesDownloaded:(long long)a10 isPSUS:(BOOL)a11;

@end
