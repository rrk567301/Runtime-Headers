@class NSData;

@interface SCSchemaSCCheckUndoResponse : SISchemaInstrumentationMessage {
    struct { unsigned char undoType : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int undoType;
@property (nonatomic) BOOL hasUndoType;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteUndoType;

@end
