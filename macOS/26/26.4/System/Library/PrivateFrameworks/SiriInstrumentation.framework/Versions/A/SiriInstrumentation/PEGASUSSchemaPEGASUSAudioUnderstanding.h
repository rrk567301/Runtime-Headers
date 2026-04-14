@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSAudioUnderstanding : SISchemaInstrumentationMessage {
    struct { unsigned char audioVerb : 1; unsigned char requestedMediaType : 1; unsigned char audioDecade : 1; } _has;
}

@property (nonatomic) int audioVerb;
@property (nonatomic) BOOL hasAudioVerb;
@property (nonatomic) int requestedMediaType;
@property (nonatomic) BOOL hasRequestedMediaType;
@property (copy, nonatomic) NSArray *audioAttributes;
@property (nonatomic) int audioDecade;
@property (nonatomic) BOOL hasAudioDecade;
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
- (void)deleteAudioVerb;
- (void)addAudioAttributes:(int)a0;
- (int)audioAttributesAtIndex:(unsigned long long)a0;
- (unsigned long long)audioAttributesCount;
- (void)clearAudioAttributes;
- (void)deleteAudioAttributes;
- (void)deleteAudioDecade;
- (void)deleteRequestedMediaType;

@end
