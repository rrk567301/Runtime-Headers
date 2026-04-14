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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBundleId;
- (void)deleteIsExplicit;
- (void)deleteSource;

@end
