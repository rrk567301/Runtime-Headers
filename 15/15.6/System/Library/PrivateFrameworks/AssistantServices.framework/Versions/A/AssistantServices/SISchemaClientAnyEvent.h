@class NSData;

@interface SISchemaClientAnyEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; } _has;
}

@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
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
- (id)si_dictionaryRepresentation;

@end
