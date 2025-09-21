@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSAudioUnderstanding : SISchemaInstrumentationMessage {
    struct { unsigned char audioVerb : 1; unsigned char requestedMediaType : 1; unsigned char audioDecade : 1; } _has;
}

@property (nonatomic) int audioVerb;
@property (nonatomic) char hasAudioVerb;
@property (nonatomic) int requestedMediaType;
@property (nonatomic) char hasRequestedMediaType;
@property (copy, nonatomic) NSArray *audioAttributes;
@property (nonatomic) int audioDecade;
@property (nonatomic) char hasAudioDecade;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
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
- (id)suppressMessageUnderConditions;

@end
