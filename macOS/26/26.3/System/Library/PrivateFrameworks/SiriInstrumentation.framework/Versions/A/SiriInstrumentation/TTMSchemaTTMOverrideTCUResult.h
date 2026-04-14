@class NSArray, NSData, SISchemaUUID;

@interface TTMSchemaTTMOverrideTCUResult : SISchemaInstrumentationMessage {
    struct { unsigned char recommendation : 1; unsigned char overrideType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) BOOL hasTcuId;
@property (nonatomic) int recommendation;
@property (nonatomic) BOOL hasRecommendation;
@property (nonatomic) int overrideType;
@property (nonatomic) BOOL hasOverrideType;
@property (copy, nonatomic) NSArray *overrideResults;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addOverrideResults:(id)a0;
- (void)clearOverrideResults;
- (void)deleteOverrideResults;
- (void)deleteOverrideType;
- (void)deleteRecommendation;
- (void)deleteTcuId;
- (id)overrideResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)overrideResultsCount;

@end
