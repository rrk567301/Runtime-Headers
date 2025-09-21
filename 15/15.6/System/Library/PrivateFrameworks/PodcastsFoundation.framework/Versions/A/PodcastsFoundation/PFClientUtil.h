@class NSString;

@interface PFClientUtil : NSObject

@property (class, readonly, nonatomic) NSString *bagProfileName;
@property (class, readonly, nonatomic) NSString *bagProfileVersion;
@property (class, readonly, nonatomic) char isRunningOnInternalOS;
@property (class, readonly, nonatomic) char isRunningOnDesktop;
@property (class, readonly, nonatomic) char isRunningOnWatch;
@property (class, readonly, nonatomic) char isUnitTesting;
@property (class, readonly, nonatomic) char supportsDownloads;
@property (class, readonly, nonatomic) char supportsLocalLibrary;
@property (class, readonly, nonatomic) char supportsImageStore;
@property (class, readonly, nonatomic) char supportsGUI;
@property (class, readonly, nonatomic) char supportsShowLockup;

+ (id)clientIdentifier;
+ (id)clientBundleVersion;
+ (char)supportsMetrics;
+ (id)clientIdentifierHeader;
+ (char)isAppRemovalService;
+ (char)isPodcastsApp;
+ (char)isPodcastsKit;
+ (char)isRunningOnHomepod;
+ (char)isRunningOnTV;
+ (char)isRunningOnVisionOS;
+ (id)mediaApiClientIdentifier;
+ (id)mediaApiClientVersion;
+ (char)platformSupportsVideo;

@end
