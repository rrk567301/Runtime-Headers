@class NSData;

@interface SISchemaUEIVisionSnippetDismissed : SISchemaInstrumentationMessage {
    struct { unsigned char startLocation : 1; unsigned char wasMoved : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int startLocation;
@property (nonatomic) BOOL hasStartLocation;
@property (nonatomic) BOOL wasMoved;
@property (nonatomic) BOOL hasWasMoved;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteReason;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteStartLocation;
- (void)deleteWasMoved;

@end
