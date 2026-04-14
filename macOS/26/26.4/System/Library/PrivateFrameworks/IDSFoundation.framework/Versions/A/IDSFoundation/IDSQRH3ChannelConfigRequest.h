@interface IDSQRH3ChannelConfigRequest : PBRequest <NSCopying>

@property (nonatomic) unsigned int overrideIdleTimeoutSeconds;
@property (nonatomic) unsigned int configCounter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
