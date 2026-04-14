@class NSString;

@interface HDCodableSharingAuthorization : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAuthorizationIdentifier;
@property (retain, nonatomic) NSString *authorizationIdentifier;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasDisplaySubtitle;
@property (retain, nonatomic) NSString *displaySubtitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)initWithSharingAuthorization:(id)a0;
- (id)sharingAuthorization;

@end
