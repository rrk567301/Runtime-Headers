@class NSData;

@interface NLRouterSchemaNLRouterDecisionGenAIMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isExplicit : 1; unsigned char genAIAppIntent : 1; unsigned char correctionOutcome : 1; } _has;
}

@property (nonatomic) char isExplicit;
@property (nonatomic) char hasIsExplicit;
@property (nonatomic) int genAIAppIntent;
@property (nonatomic) char hasGenAIAppIntent;
@property (nonatomic) int correctionOutcome;
@property (nonatomic) char hasCorrectionOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCorrectionOutcome;
- (void)deleteGenAIAppIntent;
- (void)deleteIsExplicit;
- (id)suppressMessageUnderConditions;

@end
