@interface PFClientUtil : NSObject

@property (class, readonly, nonatomic) BOOL isRunningOnInternalOS;
@property (class, readonly, nonatomic) BOOL supportsDownloads;
@property (class, readonly, nonatomic) BOOL supportsImageStore;
@property (class, readonly, nonatomic) BOOL supportsGUI;

+ (id)clientIdentifier;
+ (id)clientBundleVersion;
+ (BOOL)isRunningOniPad;
+ (BOOL)supportsMetrics;
+ (id)clientIdentifierHeader;
+ (BOOL)isAppRemovalService;
+ (BOOL)isPodcastsApp;
+ (BOOL)isPodcastsKit;
+ (BOOL)isRunningOnHomepod;
+ (BOOL)isRunningOnTV;
+ (id)mediaApiClientIdentifier;
+ (id)mediaApiClientVersion;
+ (BOOL)platformSupportsVideo;

@end
