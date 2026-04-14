@class NSData;

@interface MWTSchemaMWTCheckpointReported : SISchemaInstrumentationMessage {
    struct { unsigned char stepType : 1; } _has;
}

@property (nonatomic) int stepType;
@property (nonatomic) BOOL hasStepType;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteStepType;

@end
