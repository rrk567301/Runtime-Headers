@class NSData;

@interface ASRSchemaASRFullPayloadCorrectionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char utteranceStartTimeInNs : 1; unsigned char utteranceEndTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long utteranceStartTimeInNs;
@property (nonatomic) char hasUtteranceStartTimeInNs;
@property (nonatomic) unsigned long long utteranceEndTimeInNs;
@property (nonatomic) char hasUtteranceEndTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUtteranceEndTimeInNs;
- (void)deleteUtteranceStartTimeInNs;
- (id)suppressMessageUnderConditions;

@end
