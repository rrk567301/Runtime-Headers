@class NSDate, NSString, NSURL, MADownloadOptions, NSDictionary, NSMutableArray, NSObject, NSURLSessionTask;
@protocol OS_dispatch_queue, STExtractor, OS_nw_activity;

@interface DownloadInfo : NSObject

@property (retain, nonatomic) NSMutableArray *serviceTaskIdentifierSetCompletions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (readonly, nonatomic) NSMutableArray *callbacks;
@property (readonly, nonatomic) NSURL *originalUrl;
@property (readonly, nonatomic) NSURL *cacheServerUrl;
@property (retain, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *purpose;
@property (readonly, nonatomic) MADownloadOptions *options;
@property (readonly, nonatomic) BOOL changingConfig;
@property (readonly, nonatomic) unsigned long long backtracks;
@property (readonly, nonatomic) BOOL isStalled;
@property (readonly, nonatomic) unsigned long long numStalled;
@property (readonly, nonatomic) unsigned long long numNoLongerStalled;
@property (nonatomic) BOOL shouldRetry;
@property (retain) NSURLSessionTask *task;
@property (retain) NSString *taskDescriptor;
@property (retain) NSString *downloadServiceTaskIdentifier;
@property (retain) NSString *nsurlsessionTaskId;
@property (retain) NSString *startingAt;
@property (retain) NSString *lengthOfRange;
@property (retain) id<STExtractor> extractor;
@property BOOL extractorRequired;
@property (retain) NSDate *date;
@property long long transferredBytesEst;
@property long long totalBytesThisSlice;
@property long long previousTotalDownloaded;
@property long long currentTotalWritten;
@property long long totalExpectedBytes;
@property long long downloadSize;
@property (retain) NSString *spaceCheckedUUID;
@property (readonly, nonatomic) NSMutableArray *rateHistory;
@property (retain) NSString *firstClientName;
@property BOOL isDiscretionary;
@property BOOL isAutoDownload;
@property (retain) NSString *baseUrlNoACS;
@property (retain) NSString *relativePath;
@property BOOL isPallas;
@property (retain) NSString *pallasUrl;
@property (retain) NSString *assetAudience;
@property (retain, nonatomic) NSDictionary *analyticsData;
@property (retain) NSDate *downloadStartTime;
@property (retain) NSDate *downloadFinishTime;
@property (retain) NSDate *nonDiscretionaryUpgradeTime;
@property (retain) NSObject<OS_nw_activity> *nwActivity;
@property (readonly, nonatomic) unsigned long long signpost;
@property BOOL downloadServiceManagedTask;

- (void)clearCacheServerUrl;
- (id)initWithUrl:(id)a0 forAssetType:(id)a1 withPurpose:(id)a2 clientName:(id)a3 options:(id)a4;
- (id)initForAssetType:(id)a0 withPurpose:(id)a1 clientName:(id)a2 options:(id)a3;
- (double)currentEstimate;
- (BOOL)addNewRateDataPoint:(double)a0;
- (void)updateDownloadData:(long long)a0;
- (void)addNewDownloadInfo:(id)a0;
- (void).cxx_destruct;
- (id)_taskState;
- (void)determineDownloadUrl:(id)a0 callback:(id /* block */)a1;
- (id)description;
- (void)queuePostServiceTaskIdentifierSetOperation:(id /* block */)a0;
- (id)initWithUrl:(id)a0 clientName:(id)a1 options:(id)a2;
- (void)dealloc;

@end
