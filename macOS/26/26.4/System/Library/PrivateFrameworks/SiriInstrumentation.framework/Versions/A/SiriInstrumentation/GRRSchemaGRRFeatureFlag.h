@class NSString, NSData;

@interface GRRSchemaGRRFeatureFlag : SISchemaInstrumentationMessage {
    struct { unsigned char isEnabled : 1; } _has;
}

@property (copy, nonatomic) NSString *featureFlagKey;
@property (nonatomic) BOOL hasFeatureFlagKey;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL hasIsEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsEnabled;
- (void)deleteFeatureFlagKey;

@end
