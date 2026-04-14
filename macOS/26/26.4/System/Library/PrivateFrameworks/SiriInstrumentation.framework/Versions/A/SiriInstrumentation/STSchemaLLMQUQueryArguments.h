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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSortOrder;
- (void)deleteIsQuestionNeedingAnswer;
- (void)deleteLinkId;

@end
