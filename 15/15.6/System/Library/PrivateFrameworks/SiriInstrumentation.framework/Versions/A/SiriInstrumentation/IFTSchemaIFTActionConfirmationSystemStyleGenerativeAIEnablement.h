@class NSString, NSData;

@interface IFTSchemaIFTActionConfirmationSystemStyleGenerativeAIEnablement : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char isExplicit : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (nonatomic) int source;
@property (nonatomic) char hasSource;
@property (nonatomic) char isExplicit;
@property (nonatomic) char hasIsExplicit;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteBundleId;
- (void)deleteIsExplicit;
- (void)deleteSource;
- (id)suppressMessageUnderConditions;

@end
