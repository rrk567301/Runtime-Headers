@class NSArray, NSData, ODDSiriSchemaODDFixedDimensions;

@interface ODDSiriSchemaODDMobileAssetErrorsReported : SISchemaInstrumentationMessage {
    struct { unsigned char maEventType : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDFixedDimensions *fixedDimensions;
@property (nonatomic) BOOL hasFixedDimensions;
@property (copy, nonatomic) NSArray *maErrorsDigests;
@property (nonatomic) int maEventType;
@property (nonatomic) BOOL hasMaEventType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMaErrorsDigest:(id)a0;
- (void)clearMaErrorsDigest;
- (void)deleteFixedDimensions;
- (void)deleteMaErrorsDigest;
- (void)deleteMaEventType;
- (id)maErrorsDigestAtIndex:(unsigned long long)a0;
- (unsigned long long)maErrorsDigestCount;

@end
