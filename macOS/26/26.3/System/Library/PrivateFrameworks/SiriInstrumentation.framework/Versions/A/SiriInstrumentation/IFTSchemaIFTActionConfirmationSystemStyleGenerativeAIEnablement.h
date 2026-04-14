@class NSString, NSData;

@interface IFTSchemaIFTActionConfirmationSystemStyleGenerativeAIEnablement : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char isExplicit : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL hasIsExplicit;
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
- (void)deleteBundleId;
- (void)deleteIsExplicit;
- (void)deleteSource;

@end
