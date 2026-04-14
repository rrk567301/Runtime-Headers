@class NSArray, NSData;

@interface FLOWSchemaFLOWBriefingContext : SISchemaInstrumentationMessage {
    struct { unsigned char briefingAttribute : 1; } _has;
}

@property (copy, nonatomic) NSArray *enabledFeatures;
@property (nonatomic) int briefingAttribute;
@property (nonatomic) BOOL hasBriefingAttribute;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEnabledFeatures:(int)a0;
- (void)clearEnabledFeatures;
- (void)deleteBriefingAttribute;
- (void)deleteEnabledFeatures;
- (int)enabledFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)enabledFeaturesCount;

@end
