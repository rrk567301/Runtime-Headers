@class NSString, NSData;

@interface _MRSystemPlaybackCustomDataQueueProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *data;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
