@class NSString;

@interface HDCodableSharingAuthorization : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAuthorizationIdentifier;
@property (retain, nonatomic) NSString *authorizationIdentifier;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasDisplaySubtitle;
@property (retain, nonatomic) NSString *displaySubtitle;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSharingAuthorization:(id)a0;
- (id)sharingAuthorization;

@end
