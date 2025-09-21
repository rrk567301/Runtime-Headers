@class NSData, HMEProtoEventMetadata;

@interface HMEProtoEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasEventData;
@property (retain, nonatomic) NSData *eventData;
@property (readonly, nonatomic) char hasEventMetadata;
@property (retain, nonatomic) HMEProtoEventMetadata *eventMetadata;

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
