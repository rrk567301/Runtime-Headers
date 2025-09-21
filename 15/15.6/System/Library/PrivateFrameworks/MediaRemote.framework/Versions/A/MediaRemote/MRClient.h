@class _MRNowPlayingClientProtobuf, NSString, NSArray, MRColorComponents, NSURL, NSData;

@interface MRClient : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) MRClient *anyClient;
@property (class, readonly, nonatomic) MRClient *localClient;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) _MRNowPlayingClientProtobuf *protobuf;
@property (nonatomic) int processIdentifier;
@property (nonatomic) unsigned int processUserIdentifier;
@property (nonatomic) long long visibility;
@property (copy, nonatomic) MRColorComponents *tintColor;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *parentApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *representedBundleID;
@property (copy, nonatomic) NSArray *extendedBundleIdentifierHierarchy;
@property (copy, nonatomic) NSURL *appIcon;
@property (readonly, nonatomic) char hasPlaceholder;
@property (readonly, nonatomic) char hasAuxiliaryProperties;
@property (readonly, nonatomic, getter=isSystemMediaApplication) char systemMediaApplication;
@property (readonly, nonatomic, getter=isSystemPodcastsApplication) char systemPodcastsApplication;
@property (readonly, nonatomic, getter=isSystemBooksApplication) char systemBooksApplication;
@property (readonly, nonatomic, getter=isAirPlay) char airPlay;
@property (readonly, nonatomic, getter=isWebKit) char webKit;
@property (readonly, nonatomic) MRClient *skeleton;
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSArray *bundleIdentifierHierarchy;
@property (readonly, nonatomic, getter=isLocal) char local;
@property (readonly, nonatomic, getter=isValid) char valid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithProcessIdentifier:(int)a0 bundleIdentifier:(id)a1;
- (id)initWithProtobuf:(id)a0;
- (void)resolvePlaceholdersForDeviceInfo:(id)a0;

@end
