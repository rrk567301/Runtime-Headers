@class NSString, NSData;

@interface GRRSchemaGRRFeatureFlag : SISchemaInstrumentationMessage {
    struct { unsigned char isEnabled : 1; } _has;
}

@property (copy, nonatomic) NSString *featureFlagKey;
@property (nonatomic) BOOL hasFeatureFlagKey;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL hasIsEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIsEnabled;
- (void)deleteFeatureFlagKey;

@end
