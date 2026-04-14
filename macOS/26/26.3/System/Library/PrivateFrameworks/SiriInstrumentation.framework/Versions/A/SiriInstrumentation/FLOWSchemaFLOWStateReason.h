@class NSData;

@interface FLOWSchemaFLOWStateReason : SISchemaInstrumentationMessage {
    struct { unsigned char statusReason : 1; } _has;
}

@property (nonatomic) int statusReason;
@property (nonatomic) BOOL hasStatusReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteStatusReason;

@end
