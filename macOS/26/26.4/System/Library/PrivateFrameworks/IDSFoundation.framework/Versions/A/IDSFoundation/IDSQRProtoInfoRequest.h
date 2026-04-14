@class NSData;

@interface IDSQRProtoInfoRequest : PBRequest <NSCopying>

@property (nonatomic) unsigned int infoFlags;
@property (readonly, nonatomic) BOOL hasAccessToken;
@property (retain, nonatomic) NSData *accessToken;

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

@end
