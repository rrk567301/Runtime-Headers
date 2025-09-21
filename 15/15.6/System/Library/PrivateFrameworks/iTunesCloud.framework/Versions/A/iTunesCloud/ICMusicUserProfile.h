@class ICMusicSocialProfile, NSString, NSArray, ICStoreArtworkInfo;

@interface ICMusicUserProfile : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *socialProfileID;
@property (readonly, nonatomic) NSArray *acceptedTerms;
@property (readonly, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (readonly, nonatomic) ICMusicSocialProfile *socialProfile;
@property (readonly, nonatomic) char isPrivate;
@property (readonly, nonatomic) char isDiscoverableByContact;
@property (readonly, nonatomic) char isContactCheckAllowed;
@property (readonly, nonatomic) char isVerified;
@property (readonly, nonatomic) char isOnboarded;
@property (readonly, nonatomic) char collaborationAllowed;
@property (readonly, nonatomic) char displayNameAccepted;

+ (id)attributesInfoFromMediaAPIResponse:(id)a0;
+ (id)mediaAPIRequestURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_capabilityForKey:(id)a0 fromAttributes:(id)a1;
- (id)initWithMediaAPIResponse:(id)a0;
- (void)setSocialProfile:(id)a0;

@end
