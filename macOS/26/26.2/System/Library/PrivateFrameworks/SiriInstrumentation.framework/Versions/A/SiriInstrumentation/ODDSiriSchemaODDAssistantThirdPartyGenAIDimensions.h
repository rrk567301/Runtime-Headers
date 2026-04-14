@class NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssistantThirdPartyGenAIDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char thirdPartyGenAIAgent : 1; unsigned char requestStatus : 1; unsigned char isExplicitGenAIRequest : 1; unsigned char requestType : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) BOOL hasAssistantDimensions;
@property (nonatomic) int thirdPartyGenAIAgent;
@property (nonatomic) BOOL hasThirdPartyGenAIAgent;
@property (nonatomic) int requestStatus;
@property (nonatomic) BOOL hasRequestStatus;
@property (nonatomic) BOOL isExplicitGenAIRequest;
@property (nonatomic) BOOL hasIsExplicitGenAIRequest;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasRequestType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteAssistantDimensions;
- (void)deleteIsExplicitGenAIRequest;
- (void)deleteRequestStatus;
- (void)deleteRequestType;
- (void)deleteThirdPartyGenAIAgent;

@end
