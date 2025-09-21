@class NSData;

@interface CNVSchemaCNVIntentReformationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char transformer : 1; unsigned char targetPlugin : 1; } _has;
}

@property (nonatomic) int transformer;
@property (nonatomic) char hasTransformer;
@property (nonatomic) int targetPlugin;
@property (nonatomic) char hasTargetPlugin;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTargetPlugin;
- (void)deleteTransformer;
- (id)suppressMessageUnderConditions;

@end
