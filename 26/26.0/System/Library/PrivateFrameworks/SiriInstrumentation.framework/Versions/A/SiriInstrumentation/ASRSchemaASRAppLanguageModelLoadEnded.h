@class NSData;

@interface ASRSchemaASRAppLanguageModelLoadEnded : SISchemaInstrumentationMessage {
    struct { unsigned char loadTimeInNs : 1; unsigned char foregroundCheckTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long loadTimeInNs;
@property (nonatomic) BOOL hasLoadTimeInNs;
@property (nonatomic) unsigned long long foregroundCheckTimeInNs;
@property (nonatomic) BOOL hasForegroundCheckTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteForegroundCheckTimeInNs;
- (void)deleteLoadTimeInNs;

@end
