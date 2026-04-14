@class NSString, NSData;

@interface GRRSchemaGRRFeatureFlag : SISchemaInstrumentationMessage {
    struct { unsigned char isEnabled : 1; } _has;
}

@property (copy, nonatomic) NSString *featureFlagKey;
@property (nonatomic) BOOL hasFeatureFlagKey;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL hasIsEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsEnabled;
- (void)deleteFeatureFlagKey;
- (id)suppressMessageUnderConditions;

@end
