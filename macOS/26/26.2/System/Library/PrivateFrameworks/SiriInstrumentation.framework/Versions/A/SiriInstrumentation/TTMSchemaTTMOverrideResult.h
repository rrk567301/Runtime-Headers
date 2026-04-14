@class NSData;

@interface TTMSchemaTTMOverrideResult : SISchemaInstrumentationMessage {
    struct { unsigned char overrideType : 1; unsigned char recommendation : 1; } _has;
}

@property (nonatomic) int overrideType;
@property (nonatomic) BOOL hasOverrideType;
@property (nonatomic) int recommendation;
@property (nonatomic) BOOL hasRecommendation;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteOverrideType;
- (void)deleteRecommendation;

@end
