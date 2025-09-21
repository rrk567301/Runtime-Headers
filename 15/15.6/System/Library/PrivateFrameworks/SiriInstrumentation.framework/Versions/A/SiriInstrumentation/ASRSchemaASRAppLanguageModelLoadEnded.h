@class NSData;

@interface ASRSchemaASRAppLanguageModelLoadEnded : SISchemaInstrumentationMessage {
    struct { unsigned char loadTimeInNs : 1; unsigned char foregroundCheckTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long loadTimeInNs;
@property (nonatomic) char hasLoadTimeInNs;
@property (nonatomic) unsigned long long foregroundCheckTimeInNs;
@property (nonatomic) char hasForegroundCheckTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteForegroundCheckTimeInNs;
- (void)deleteLoadTimeInNs;
- (id)suppressMessageUnderConditions;

@end
