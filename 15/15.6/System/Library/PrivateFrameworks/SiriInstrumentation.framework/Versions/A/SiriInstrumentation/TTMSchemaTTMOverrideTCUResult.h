@class NSArray, NSData, SISchemaUUID;

@interface TTMSchemaTTMOverrideTCUResult : SISchemaInstrumentationMessage {
    struct { unsigned char recommendation : 1; unsigned char overrideType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) char hasTcuId;
@property (nonatomic) int recommendation;
@property (nonatomic) char hasRecommendation;
@property (nonatomic) int overrideType;
@property (nonatomic) char hasOverrideType;
@property (copy, nonatomic) NSArray *overrideResults;
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
- (void)addOverrideResults:(id)a0;
- (void)clearOverrideResults;
- (void)deleteOverrideResults;
- (void)deleteOverrideType;
- (void)deleteRecommendation;
- (void)deleteTcuId;
- (id)overrideResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)overrideResultsCount;
- (id)suppressMessageUnderConditions;

@end
