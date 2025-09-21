@class NSData;

@interface MWTSchemaMWTCheckpointReported : SISchemaInstrumentationMessage {
    struct { unsigned char stepType : 1; } _has;
}

@property (nonatomic) int stepType;
@property (nonatomic) char hasStepType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteStepType;
- (id)suppressMessageUnderConditions;

@end
