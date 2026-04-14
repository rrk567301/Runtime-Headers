@class NPTResults, NSString, NPTUpload, NPTMetadataCollector, NSMutableDictionary, NSDictionary, NetworkQualityExecutions, NPTPerformanceTestConfiguration, NPTPing, NSObject, NPTDownload;
@protocol OS_nw_activity;

@interface NPTPerformanceTest : NSObject <NPTPingDelegate, NPTDownloadDelegate, NPTUploadDelegate, NSSecureCoding, NSCopying> {
    NPTDownload *download;
    NPTUpload *upload;
    NPTPing *ping;
    NSMutableDictionary *restoredMetadata;
    NSString *uuid;
    NSObject<OS_nw_activity> *performanceTestActivity;
    NSMutableDictionary *snapshots;
    NPTMetadataCollector *collector;
    BOOL activatedActivity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NPTResults *results;
@property (nonatomic) BOOL inTimedMode;
@property (retain, nonatomic) NetworkQualityExecutions *networkQualityExecution;
@property (copy, nonatomic) id /* block */ _metadataDidChangeHandler;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NPTPerformanceTestConfiguration *configuration;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) id /* block */ metadataDidChangeHandler;
@property (retain, nonatomic) NSDictionary *_additionalMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)performanceTestWithConfiguration:(id)a0;
+ (id)performanceTestWithDefaultConfiguration;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)save;
- (void)startUploadWithCompletion:(id /* block */)a0;
- (void)pingWillStartPinging;
- (void)pingDidFinishWithResults:(id)a0;
- (void)pingDidFinishWithError:(id)a0;
- (void)downloadWillStart;
- (void)download:(id)a0 didReceiveSpeedMetric:(id)a1;
- (void)download:(id)a0 didFinishWithResults:(id)a1;
- (void)download:(id)a0 didFinishWithError:(id)a1;
- (void)uploadWillStart;
- (void)upload:(id)a0 didReceiveSpeedMetric:(id)a1;
- (void)upload:(id)a0 didFinishWithResults:(id)a1;
- (void)upload:(id)a0 didFinishWithError:(id)a1;
- (void)startPingWithCompletion:(id /* block */)a0;
- (void)startNetworkQualityWithCompletionHandler:(id /* block */)a0;
- (void)startDownloadWithCompletion:(id /* block */)a0;
- (void)startTestWithCompletion:(id /* block */)a0;
- (void)saveToAWD;
- (void)activateActivity;
- (void)completeActivityWithReason:(int)a0;
- (id)timestampMasked;
- (id)convertDateToISO8601String:(id)a0;
- (id)timestampMaskedString;
- (id)getFlattenedMetadataDictionary:(id)a0;
- (id)getDataForCoreAnalytics;
- (id)getFlattenedDictionary;
- (id)getTransformedDataForCoreAnalytics;
- (void)cancelAllNetworking;
- (id)NQRatingFromEnum:(long long)a0;
- (void)fetchAndSaveWRMMetrics;
- (void)logFrameworkUsage:(int)a0;
- (id)collectorsWithoutCDNDebug;
- (void)startMetadataCollectionWithCompletion:(id /* block */)a0;
- (void)stopMetadataCollection;

@end
