@class NSString;

@interface BMPBAppClipLaunchEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasURLHash;
@property (retain, nonatomic) NSString *uRLHash;
@property (readonly, nonatomic) char hasClipBundleID;
@property (retain, nonatomic) NSString *clipBundleID;
@property (readonly, nonatomic) char hasAppBundleID;
@property (retain, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) char hasWebAppBundleID;
@property (retain, nonatomic) NSString *webAppBundleID;
@property (readonly, nonatomic) char hasLaunchReason;
@property (retain, nonatomic) NSString *launchReason;
@property (readonly, nonatomic) char hasFullURL;
@property (retain, nonatomic) NSString *fullURL;
@property (readonly, nonatomic) char hasReferrerURL;
@property (retain, nonatomic) NSString *referrerURL;
@property (readonly, nonatomic) char hasReferrerBundleID;
@property (retain, nonatomic) NSString *referrerBundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
