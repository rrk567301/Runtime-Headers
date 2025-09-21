@class NSData;

@interface MHSchemaMHASRAudioConfigureStarted : SISchemaInstrumentationMessage {
    struct { unsigned char audioCodec : 1; unsigned char audioSkippedTimeInNs : 1; unsigned char audioSkippedNumSamples : 1; } _has;
}

@property (nonatomic) int audioCodec;
@property (nonatomic) char hasAudioCodec;
@property (nonatomic) unsigned long long audioSkippedTimeInNs;
@property (nonatomic) char hasAudioSkippedTimeInNs;
@property (nonatomic) unsigned long long audioSkippedNumSamples;
@property (nonatomic) char hasAudioSkippedNumSamples;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioCodec;
- (void)deleteAudioSkippedNumSamples;
- (void)deleteAudioSkippedTimeInNs;
- (id)suppressMessageUnderConditions;

@end
