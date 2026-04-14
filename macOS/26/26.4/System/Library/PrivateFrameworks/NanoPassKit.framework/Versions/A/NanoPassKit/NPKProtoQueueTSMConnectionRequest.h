@class NSString;

@interface NPKProtoQueueTSMConnectionRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPushTopic;
@property (retain, nonatomic) NSString *pushTopic;

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
