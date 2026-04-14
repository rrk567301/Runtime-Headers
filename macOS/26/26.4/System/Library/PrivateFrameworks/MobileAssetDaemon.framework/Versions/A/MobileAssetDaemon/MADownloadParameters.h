@class NSString, NSDictionary, NSURL, NSData, NSURLRequest, NSNumber;
@protocol STExtractor;

@interface MADownloadParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *assetAttributes;
@property (retain, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) NSURLRequest *originalURLRequest;
@property (retain, nonatomic) NSString *downloadPath;
@property (retain, nonatomic) NSString *downloadTaskFilePath;
@property (retain, nonatomic) NSURL *pallasURL;
@property (retain, nonatomic) NSString *taskDescriptor;
@property (retain, nonatomic) NSString *autoAssetJobIdentifier;
@property (nonatomic) unsigned long long rangeStart;
@property (nonatomic) unsigned long long rangeLength;
@property (nonatomic) BOOL downloadUsesSTExtractor;
@property (retain, nonatomic) id<STExtractor> extractor;
@property (nonatomic) BOOL usePrivilegedExtractor;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL disableUI;
@property (nonatomic) BOOL allowsExpensiveAccess;
@property (nonatomic) BOOL allowsConstrainedAccess;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) BOOL canUseLocalCacheServer;
@property (nonatomic) BOOL isCachingServer;
@property (nonatomic) BOOL prefersInfraWiFi;
@property (retain, nonatomic) NSNumber *downloadSize;
@property (retain, nonatomic) NSString *downloadAuthorizationHeader;
@property (retain, nonatomic) NSData *decryptionKey;
@property (retain, nonatomic) NSString *sourceDirectory;
@property (retain, nonatomic) NSString *clientBundleIdentifier;
@property (retain, nonatomic) NSString *brainCryptexGraftPath;
@property (nonatomic) BOOL skipKnoxURL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
