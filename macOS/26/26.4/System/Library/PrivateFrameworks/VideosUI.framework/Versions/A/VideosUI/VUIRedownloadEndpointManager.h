@class NSMutableArray;

@interface VUIRedownloadEndpointManager : NSObject

@property (retain, nonatomic) NSMutableArray *pendingRedownloadInfos;
@property (nonatomic) BOOL initialRedownloadInProgress;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
