@class NSString;

@interface VUILaunchConfig : NSObject

@property (nonatomic) char useConfigCacheIgnoreExpiry;
@property (nonatomic) double extendedCacheExpireDuration;
@property (nonatomic) long long layoutReuseIdleTimeToLive;
@property (nonatomic) char collectionUseIdForReuseIdEnabled;
@property (nonatomic) char gridViewUseItemIdAsReuseId;
@property (nonatomic) char memoryImageCacheEnabled;
@property (nonatomic) char deferRichTextViewUpdate;
@property (nonatomic) long long imageInMemoryCacheSizeLimitInBytes;
@property (nonatomic) char useSharedURLSession;
@property (nonatomic) char prewarmUTSConnection;
@property (nonatomic) char alwaysPrefetchAppConfiguration;
@property (nonatomic) char prefetchLastSelectedTab;
@property (nonatomic) double prefetchedTabExpirationDuration;
@property (nonatomic) char prewarmImageConnection;
@property (nonatomic) char minimalSessionImageLoading;
@property (nonatomic) char prewarmJetpackLoading;
@property (retain, nonatomic) NSString *prewarmImageUrl;
@property (nonatomic) char checkRemoteServerReachability;
@property (nonatomic) double remoteServerReachabilityTimeoutDuration;
@property (retain, nonatomic) NSString *prewarmUTSUrl;

- (id)init;
- (void).cxx_destruct;

@end
