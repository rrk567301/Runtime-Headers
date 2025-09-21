@class NSData;

@interface MHSchemaMHAttendingStarted : SISchemaInstrumentationMessage {
    struct { unsigned char startReason : 1; } _has;
}

@property (nonatomic) int startReason;
@property (nonatomic) char hasStartReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteStartReason;
- (id)suppressMessageUnderConditions;

@end
