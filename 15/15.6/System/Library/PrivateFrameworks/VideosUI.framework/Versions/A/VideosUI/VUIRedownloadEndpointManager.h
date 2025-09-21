@class NSMutableArray;

@interface VUIRedownloadEndpointManager : NSObject

@property (retain, nonatomic) NSMutableArray *pendingRedownloadInfos;
@property (nonatomic) char initialRedownloadInProgress;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
