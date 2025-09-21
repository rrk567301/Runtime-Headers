@class NSData, SISchemaUUID;

@interface STSchemaLLMQUQueryArguments : SISchemaInstrumentationMessage {
    struct { unsigned char isQuestionNeedingAnswer : 1; unsigned char sortOrder : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) BOOL isQuestionNeedingAnswer;
@property (nonatomic) BOOL hasIsQuestionNeedingAnswer;
@property (nonatomic) int sortOrder;
@property (nonatomic) BOOL hasSortOrder;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteSortOrder;
- (void)deleteIsQuestionNeedingAnswer;
- (void)deleteLinkId;

@end
