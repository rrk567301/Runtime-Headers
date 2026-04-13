@interface PFClientUtil : NSObject

@property (class, readonly, nonatomic) BOOL isRunningOnInternalOS;
@property (class, readonly, nonatomic) BOOL supportsDownloads;

+ (id)clientIdentifier;
+ (id)clientBundleVersion;
+ (BOOL)isPodcastsApp;
+ (BOOL)isRunningOnHomepod;
+ (BOOL)supportsMetrics;
+ (id)clientIdentifierHeader;
+ (id)mediaApiClientIdentifier;
+ (id)mediaApiClientVersion;
+ (BOOL)isRunningOnTV;
+ (BOOL)platformSupportsVideo;

@end
