@class NSArray, NSData;

@interface FLOWSchemaFLOWBriefingContext : SISchemaInstrumentationMessage {
    struct { unsigned char briefingAttribute : 1; } _has;
}

@property (copy, nonatomic) NSArray *enabledFeatures;
@property (nonatomic) int briefingAttribute;
@property (nonatomic) char hasBriefingAttribute;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addEnabledFeatures:(int)a0;
- (void)clearEnabledFeatures;
- (void)deleteBriefingAttribute;
- (void)deleteEnabledFeatures;
- (int)enabledFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)enabledFeaturesCount;
- (id)suppressMessageUnderConditions;

@end
