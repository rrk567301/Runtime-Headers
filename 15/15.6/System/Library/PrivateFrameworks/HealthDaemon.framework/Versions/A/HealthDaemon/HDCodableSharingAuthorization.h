@class NSString;

@interface HDCodableSharingAuthorization : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAuthorizationIdentifier;
@property (retain, nonatomic) NSString *authorizationIdentifier;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char hasDisplaySubtitle;
@property (retain, nonatomic) NSString *displaySubtitle;

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
- (id)initWithSharingAuthorization:(id)a0;
- (id)sharingAuthorization;

@end
