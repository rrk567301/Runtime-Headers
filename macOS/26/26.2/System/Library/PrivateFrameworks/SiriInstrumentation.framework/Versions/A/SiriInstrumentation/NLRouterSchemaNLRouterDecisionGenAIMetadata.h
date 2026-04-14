@class NSData;

@interface NLRouterSchemaNLRouterDecisionGenAIMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isExplicit : 1; unsigned char genAIAppIntent : 1; unsigned char correctionOutcome : 1; unsigned char requestedGenAIAgent : 1; } _has;
}

@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL hasIsExplicit;
@property (nonatomic) int genAIAppIntent;
@property (nonatomic) BOOL hasGenAIAppIntent;
@property (nonatomic) int correctionOutcome;
@property (nonatomic) BOOL hasCorrectionOutcome;
@property (nonatomic) int requestedGenAIAgent;
@property (nonatomic) BOOL hasRequestedGenAIAgent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteCorrectionOutcome;
- (void)deleteGenAIAppIntent;
- (void)deleteIsExplicit;
- (void)deleteRequestedGenAIAgent;

@end
