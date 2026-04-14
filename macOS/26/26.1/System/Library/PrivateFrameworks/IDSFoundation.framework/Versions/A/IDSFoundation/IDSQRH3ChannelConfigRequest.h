@interface IDSQRH3ChannelConfigRequest : PBRequest <NSCopying>

@property (nonatomic) unsigned int overrideIdleTimeoutSeconds;
@property (nonatomic) unsigned int configCounter;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
