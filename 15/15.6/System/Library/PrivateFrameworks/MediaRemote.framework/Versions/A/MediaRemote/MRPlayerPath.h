@class _MRNowPlayingPlayerPathProtobuf, MRClient, NSData, MROrigin, MRPlayer;

@interface MRPlayerPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) MRPlayerPath *anyPlayerPath;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *protobuf;
@property (copy, nonatomic) MROrigin *origin;
@property (copy, nonatomic) MRClient *client;
@property (copy, nonatomic) MRPlayer *player;
@property (readonly, nonatomic) MRPlayerPath *localResolvedPlayerPath;
@property (readonly, nonatomic, getter=isLocal) char local;
@property (readonly, nonatomic) MRPlayerPath *skeleton;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isResolved) char resolved;
@property (readonly, nonatomic, getter=isSystemMediaApplication) char systemMediaApplication;
@property (readonly, nonatomic, getter=isSystemPodcastsApplication) char systemPodcastsApplication;
@property (readonly, nonatomic, getter=isSystemBooksApplication) char systemBooksApplication;
@property (readonly, nonatomic, getter=isHomepodDemoApplication) char homepodDemoApplication;

+ (id)localPlayerPath;
+ (id)localResolvedPlayerPathFromPlayerPath:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithOrigin:(id)a0 bundleIdentifier:(id)a1 player:(id)a2;
- (id)initWithOrigin:(id)a0 client:(id)a1 player:(id)a2;
- (id)initWithProtobuf:(id)a0;
- (id)playerPathByLocalizingWithOrigin:(id)a0;
- (id)playerPathByRedirectingToOrigin:(id)a0;

@end
