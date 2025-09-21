@class NSData;

@interface FLOWSchemaFLOWStateReason : SISchemaInstrumentationMessage {
    struct { unsigned char statusReason : 1; } _has;
}

@property (nonatomic) int statusReason;
@property (nonatomic) char hasStatusReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteStatusReason;
- (id)suppressMessageUnderConditions;

@end
