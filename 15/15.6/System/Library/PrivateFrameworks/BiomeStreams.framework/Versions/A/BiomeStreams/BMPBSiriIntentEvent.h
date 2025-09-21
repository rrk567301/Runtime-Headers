@class NSString, NSData;

@interface BMPBSiriIntentEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIntentId;
@property (retain, nonatomic) NSString *intentId;
@property (readonly, nonatomic) char hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) char hasEventData;
@property (retain, nonatomic) NSData *eventData;

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
