@class NSData, NSUUID, HMSoftwareUpdateDocumentationMetadata, NSURL, NSDate, HMSoftwareUpdateDocumentation, NSString, NSInputStream, NSArray, NSObject, NSNotificationCenter;
@protocol HMSoftwareUpdateUrlSession, HMSoftwareUpdateDocumentationAssetExtractor, OS_dispatch_queue, HMDFileManager;

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, HMSoftwareUpdateUrlSessionDelegate, HMSoftwareUpdateDocumentationAssetExtractorDelegate, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) NSURL *assetDirectoryURL;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<HMSoftwareUpdateUrlSession> URLSession;
@property (readonly) id /* block */ URLSessionFactory;
@property (retain, nonatomic) id<HMSoftwareUpdateDocumentationAssetExtractor> extractor;
@property (readonly) id /* block */ extractorFactory;
@property (retain, nonatomic) NSInputStream *archivedFileStream;
@property BOOL shouldAutomaticallyCache;
@property unsigned long long downloadRetryCount;
@property (readonly) id /* block */ dateWithTimeIntervalSinceNowFactory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSURL *archiveURL;
@property (readonly, copy) NSURL *metadataURL;
@property (retain, nonatomic) id<HMDFileManager> fileManager;
@property BOOL extractionEnteredPassThrough;
@property (readonly) BOOL isDownloadPermitted;
@property (copy) NSDate *nextPermittedDownloadDate;
@property (retain, nonatomic) NSData *testDocumentData;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *metadata;
@property (readonly) long long state;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) HMSoftwareUpdateDocumentation *documentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)assetWithURL:(id)a0 fileManager:(id)a1;

- (void)setState:(long long)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)saveWithError:(id *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (id)logIdentifier;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)purgeWithError:(id *)a0;
- (void)extractionCompleteAtArchivePath:(id)a0;
- (void)extractionEnteredPassThroughMode;
- (void)setExtractionProgress:(double)a0;
- (void)cancelDownload;
- (void)finishUnarchive;
- (void)finishDownload;
- (id)initWithDocumentationMetadata:(id)a0;
- (void)startCaching;
- (void)startDownload;
- (void)startUnarchive;
- (void)cancelUnarchive;
- (void)increaseDownloadRetryCount;
- (id)initWithDocumentationMetadata:(id)a0 dateWithTimeIntervalSinceNowFactory:(id /* block */)a1 URLSessionFactory:(id /* block */)a2 extractorFactory:(id /* block */)a3 notificationCenter:(id)a4 fileManager:(id)a5;
- (void)resetDownloadRetryCount;

@end
