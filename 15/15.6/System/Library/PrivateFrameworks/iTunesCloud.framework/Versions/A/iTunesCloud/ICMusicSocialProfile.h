@class NSString, ICStoreArtworkInfo;

@interface ICMusicSocialProfile : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *socialProfileID;
@property (readonly, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (readonly, nonatomic) char isPrivate;
@property (readonly, nonatomic) char isVerified;

+ (id)mediaAPIRequestURL;
+ (id)socialProfileInfoFromMediaAPIResponse:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMediaAPIResponse:(id)a0;

@end
