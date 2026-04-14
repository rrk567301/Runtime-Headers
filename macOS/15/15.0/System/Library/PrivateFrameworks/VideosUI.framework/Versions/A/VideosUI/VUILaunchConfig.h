@class NSString;

@interface VUILaunchConfig : NSObject

@property (nonatomic) BOOL useConfigCacheIgnoreExpiry;
@property (nonatomic) double extendedCacheExpireDuration;
@property (nonatomic) long long layoutReuseIdleTimeToLive;
@property (nonatomic) BOOL collectionUseIdForReuseIdEnabled;
@property (nonatomic) BOOL gridViewUseItemIdAsReuseId;
@property (nonatomic) BOOL memoryImageCacheEnabled;
@property (nonatomic) BOOL deferRichTextViewUpdate;
@property (nonatomic) long long imageInMemoryCacheSizeLimitInBytes;
@property (nonatomic) BOOL useSharedURLSession;
@property (nonatomic) BOOL alwaysPrefetchAppConfiguration;
@property (nonatomic) BOOL prewarmImageConnection;
@property (retain, nonatomic) NSString *prewarmImageUrl;

- (id)init;
- (void).cxx_destruct;

@end
