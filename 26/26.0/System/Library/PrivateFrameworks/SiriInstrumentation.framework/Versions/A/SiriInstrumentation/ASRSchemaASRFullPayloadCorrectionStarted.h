@class NSData;

@interface ASRSchemaASRFullPayloadCorrectionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char utteranceStartTimeInNs : 1; unsigned char utteranceEndTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long utteranceStartTimeInNs;
@property (nonatomic) BOOL hasUtteranceStartTimeInNs;
@property (nonatomic) unsigned long long utteranceEndTimeInNs;
@property (nonatomic) BOOL hasUtteranceEndTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteUtteranceEndTimeInNs;
- (void)deleteUtteranceStartTimeInNs;

@end
