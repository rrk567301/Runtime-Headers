@class NSString, NSData;

@interface GRRSchemaGRRFeatureFlag : SISchemaInstrumentationMessage {
    struct { unsigned char isEnabled : 1; } _has;
}

@property (copy, nonatomic) NSString *featureFlagKey;
@property (nonatomic) char hasFeatureFlagKey;
@property (nonatomic) char isEnabled;
@property (nonatomic) char hasIsEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsEnabled;
- (void)deleteFeatureFlagKey;
- (id)suppressMessageUnderConditions;

@end
