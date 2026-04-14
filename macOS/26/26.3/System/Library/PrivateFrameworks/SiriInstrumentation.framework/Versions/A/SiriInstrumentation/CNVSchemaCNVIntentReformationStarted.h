@class NSData;

@interface CNVSchemaCNVIntentReformationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char transformer : 1; unsigned char targetPlugin : 1; } _has;
}

@property (nonatomic) int transformer;
@property (nonatomic) BOOL hasTransformer;
@property (nonatomic) int targetPlugin;
@property (nonatomic) BOOL hasTargetPlugin;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteTargetPlugin;
- (void)deleteTransformer;

@end
