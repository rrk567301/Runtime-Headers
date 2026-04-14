@class NSData;

@interface ASRSpeechProfileSchemaASRSpeechProfileEntityCleanupMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char isCleanupIngestionEnabled : 1; unsigned char numEntitiesContainingEmoji : 1; unsigned char numEntitiesContainingSpecialCharacters : 1; unsigned char numEntitiesCleaned : 1; } _has;
}

@property (nonatomic) BOOL isCleanupIngestionEnabled;
@property (nonatomic) BOOL hasIsCleanupIngestionEnabled;
@property (nonatomic) unsigned int numEntitiesContainingEmoji;
@property (nonatomic) BOOL hasNumEntitiesContainingEmoji;
@property (nonatomic) unsigned int numEntitiesContainingSpecialCharacters;
@property (nonatomic) BOOL hasNumEntitiesContainingSpecialCharacters;
@property (nonatomic) unsigned int numEntitiesCleaned;
@property (nonatomic) BOOL hasNumEntitiesCleaned;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIsCleanupIngestionEnabled;
- (void)deleteNumEntitiesCleaned;
- (void)deleteNumEntitiesContainingEmoji;
- (void)deleteNumEntitiesContainingSpecialCharacters;

@end
