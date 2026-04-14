@class NPTResults, NSString, NPTUpload, NPTMetadataCollector, NSMutableDictionary, NSDictionary, NPTPerformanceTestConfiguration, NSObject, NPTPing, NPTDownload;
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
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NPTResults *results;
@property (nonatomic) BOOL inTimedMode;
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

- (void)pingWillStartPinging;
- (void)save;
- (void)download:(id)a0 didFinishWithResults:(id)a1;
- (id)getDataForCoreAnalytics;
- (void)activateActivity;
- (id)initWithConfiguration:(id)a0;
- (void)pingDidFinishWithError:(id)a0;
- (void)stopMetadataCollection;
- (void)startUploadWithCompletion:(id /* block */)a0;
- (id)getTransformedDataForCoreAnalytics;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)upload:(id)a0 didFinishWithError:(id)a1;
- (void)download:(id)a0 didFinishWithError:(id)a1;
- (id)convertDateToISO8601String:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)getFlattenedMetadataDictionary:(id)a0;
- (void)startPingWithCompletion:(id /* block */)a0;
- (void)upload:(id)a0 didReceiveSpeedMetric:(id)a1;
- (void)fetchAndSaveWRMMetrics;
- (void)downloadWillStart;
- (void)startDownloadWithCompletion:(id /* block */)a0;
- (id)timestampMasked;
- (void).cxx_destruct;
- (id)timestampMaskedString;
- (void)upload:(id)a0 didFinishWithResults:(id)a1;
- (void)startTestWithCompletion:(id /* block */)a0;
- (void)logFrameworkUsage:(int)a0;
- (void)download:(id)a0 didReceiveSpeedMetric:(id)a1;
- (void)pingDidFinishWithResults:(id)a0;
- (id)init;
- (void)saveToAWD;
- (void)cancelAllNetworking;
- (id)collectorsWithoutCDNDebug;
- (id)getFlattenedDictionary;
- (id)initWithCoder:(id)a0;
- (void)completeActivityWithReason:(int)a0;
- (void)startMetadataCollectionWithCompletion:(id /* block */)a0;
- (void)uploadWillStart;
- (void)dealloc;
- (id)NQRatingFromEnum:(long long)a0;

@end
