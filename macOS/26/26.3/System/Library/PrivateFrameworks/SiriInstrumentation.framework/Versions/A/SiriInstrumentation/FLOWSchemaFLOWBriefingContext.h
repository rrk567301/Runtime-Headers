@class NSArray, NSData;

@interface FLOWSchemaFLOWBriefingContext : SISchemaInstrumentationMessage {
    struct { unsigned char briefingAttribute : 1; } _has;
}

@property (copy, nonatomic) NSArray *enabledFeatures;
@property (nonatomic) int briefingAttribute;
@property (nonatomic) BOOL hasBriefingAttribute;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addEnabledFeatures:(int)a0;
- (void)clearEnabledFeatures;
- (void)deleteBriefingAttribute;
- (void)deleteEnabledFeatures;
- (int)enabledFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)enabledFeaturesCount;

@end
