@class NSString, NSData, SISchemaUUID;

@interface CNVSchemaCNVDecisionEngineResponseReported : SISchemaInstrumentationMessage {
    struct { unsigned char isExistingFlowSelected : 1; unsigned char isInterpretableAsUniversalCommand : 1; } _has;
}

@property (copy, nonatomic) NSString *flowHandlerId;
@property (nonatomic) char hasFlowHandlerId;
@property (retain, nonatomic) SISchemaUUID *parseHypothesisId;
@property (nonatomic) char hasParseHypothesisId;
@property (nonatomic) char isExistingFlowSelected;
@property (nonatomic) char hasIsExistingFlowSelected;
@property (nonatomic) char isInterpretableAsUniversalCommand;
@property (nonatomic) char hasIsInterpretableAsUniversalCommand;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFlowHandlerId;
- (void)deleteIsExistingFlowSelected;
- (void)deleteIsInterpretableAsUniversalCommand;
- (void)deleteParseHypothesisId;
- (id)suppressMessageUnderConditions;

@end
