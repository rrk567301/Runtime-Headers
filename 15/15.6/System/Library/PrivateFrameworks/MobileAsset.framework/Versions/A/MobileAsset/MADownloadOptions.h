@class NSString, NSMutableDictionary, NSDictionary, NSData;

@interface MADownloadOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char allowsCellularAccess;
@property (nonatomic) long long timeoutIntervalForResource;
@property (nonatomic) char discretionary;
@property (nonatomic) char disableUI;
@property (nonatomic) char allowsExpensiveAccess;
@property (nonatomic) char allowsConstrainedAccess;
@property (nonatomic) char requiresPowerPluggedIn;
@property (nonatomic) char canUseLocalCacheServer;
@property (nonatomic) char prefersInfraWiFi;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableDictionary *additionalServerParams;
@property (retain, nonatomic) NSDictionary *analyticsData;
@property (nonatomic) char liveServerCatalogOnly;
@property (nonatomic) char liveServerCatalogOnlyIsOverridden;
@property (retain, nonatomic) NSString *downloadAuthorizationHeader;
@property (retain, nonatomic) NSData *decryptionKey;
@property (retain, nonatomic) NSString *sourceDirectory;
@property (nonatomic) char allowDaemonConnectionRetries;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlist:(id)a0;
- (id)encodeAsPlist;
- (void)logOptions;
- (id)tightSummaryIncludingAdditional:(char)a0;

@end
