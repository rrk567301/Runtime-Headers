@interface PFClientUtil : NSObject

@property (class, readonly, nonatomic) BOOL isRunningOnInternalOS;
@property (class, readonly, nonatomic) BOOL supportsDownloads;

+ (id)clientIdentifier;
+ (id)clientBundleVersion;
+ (id)clientIdentifierHeader;
+ (id)mediaApiClientIdentifier;
+ (id)mediaApiClientVersion;
+ (BOOL)isPodcastsApp;
+ (BOOL)supportsMetrics;
+ (BOOL)isRunningOnHomepod;
+ (BOOL)isRunningOnTV;
+ (BOOL)platformSupportsVideo;

@end
