@class NSData;

@interface IFTSchemaIFTInitiatedSpans : SISchemaInstrumentationMessage {
    struct { unsigned char participant : 1; unsigned char spanId : 1; } _has;
}

@property (nonatomic) int participant;
@property (nonatomic) BOOL hasParticipant;
@property (nonatomic) unsigned long long spanId;
@property (nonatomic) BOOL hasSpanId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteParticipant;
- (void)deleteSpanId;

@end
