@class NSData;

@interface MHSchemaMHAttendingEnded : SISchemaInstrumentationMessage {
    struct { unsigned char endReason : 1; } _has;
}

@property (nonatomic) int endReason;
@property (nonatomic) BOOL hasEndReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteEndReason;

@end
