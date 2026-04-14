@class ICLiveLink, NSString;

@interface MPCPlaybackSharedListeningProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ICLiveLink *liveLink;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSString *sessionKey;

+ (id)propertiesWithSessionIdentifier:(id)a0 sessionKey:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
