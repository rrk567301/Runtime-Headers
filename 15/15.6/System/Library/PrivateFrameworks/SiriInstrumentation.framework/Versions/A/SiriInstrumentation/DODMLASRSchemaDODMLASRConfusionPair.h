@class NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRConfusionPair : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char editMethod : 1; unsigned char editReason : 1; unsigned char recognizedTextStartIndex : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *asrId;
@property (nonatomic) char hasAsrId;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) int editMethod;
@property (nonatomic) char hasEditMethod;
@property (nonatomic) int editReason;
@property (nonatomic) char hasEditReason;
@property (nonatomic) int recognizedTextStartIndex;
@property (nonatomic) char hasRecognizedTextStartIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAsrId;
- (void)deleteEditMethod;
- (void)deleteEditReason;
- (void)deleteRecognizedTextStartIndex;
- (id)suppressMessageUnderConditions;

@end
