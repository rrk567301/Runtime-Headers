@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSAMPPersonalizationLoggingInfo : SISchemaInstrumentationMessage {
    struct { unsigned char isPersonalizationEligible : 1; unsigned char isPersonalizedSession : 1; unsigned char isPersonalizedSessionAffected : 1; } _has;
}

@property (nonatomic) BOOL isPersonalizationEligible;
@property (nonatomic) BOOL hasIsPersonalizationEligible;
@property (nonatomic) BOOL isPersonalizedSession;
@property (nonatomic) BOOL hasIsPersonalizedSession;
@property (nonatomic) BOOL isPersonalizedSessionAffected;
@property (nonatomic) BOOL hasIsPersonalizedSessionAffected;
@property (copy, nonatomic) NSArray *personalizedItemInfos;
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
- (void)deleteIsPersonalizationEligible;
- (void)addPersonalizedItemInfo:(id)a0;
- (void)clearPersonalizedItemInfo;
- (void)deleteIsPersonalizedSession;
- (void)deleteIsPersonalizedSessionAffected;
- (void)deletePersonalizedItemInfo;
- (id)personalizedItemInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)personalizedItemInfoCount;

@end
