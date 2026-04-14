@class NSArray, NSData;

@interface FLOWSchemaFLOWBriefingContext : SISchemaInstrumentationMessage {
    struct { unsigned char briefingAttribute : 1; } _has;
}

@property (copy, nonatomic) NSArray *enabledFeatures;
@property (nonatomic) int briefingAttribute;
@property (nonatomic) BOOL hasBriefingAttribute;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)clearEnabledFeatures;
- (void)deleteEnabledFeatures;
- (void)addEnabledFeatures:(int)a0;
- (unsigned long long)enabledFeaturesCount;
- (int)enabledFeaturesAtIndex:(unsigned long long)a0;
- (void)deleteBriefingAttribute;

@end
