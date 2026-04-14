@class NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssistantThirdPartyGenAIDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char thirdPartyGenAIAgent : 1; unsigned char requestStatus : 1; unsigned char isExplicitGenAIRequest : 1; unsigned char requestType : 1; unsigned char isGenAIAware : 1; unsigned char isSuitableForGenAI : 1; unsigned char isAmbiguousRequest : 1; } _has;
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
@property (nonatomic) BOOL isGenAIAware;
@property (nonatomic) BOOL hasIsGenAIAware;
@property (nonatomic) BOOL isSuitableForGenAI;
@property (nonatomic) BOOL hasIsSuitableForGenAI;
@property (nonatomic) BOOL isAmbiguousRequest;
@property (nonatomic) BOOL hasIsAmbiguousRequest;
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
- (void)deleteAssistantDimensions;
- (void)deleteIsAmbiguousRequest;
- (void)deleteIsExplicitGenAIRequest;
- (void)deleteIsGenAIAware;
- (void)deleteIsSuitableForGenAI;
- (void)deleteRequestStatus;
- (void)deleteRequestType;
- (void)deleteThirdPartyGenAIAgent;

@end
