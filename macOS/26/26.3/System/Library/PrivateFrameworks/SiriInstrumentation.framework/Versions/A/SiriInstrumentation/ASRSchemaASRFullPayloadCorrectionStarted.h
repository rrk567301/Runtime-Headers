@class NSData;

@interface ASRSchemaASRFullPayloadCorrectionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char utteranceStartTimeInNs : 1; unsigned char utteranceEndTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long utteranceStartTimeInNs;
@property (nonatomic) BOOL hasUtteranceStartTimeInNs;
@property (nonatomic) unsigned long long utteranceEndTimeInNs;
@property (nonatomic) BOOL hasUtteranceEndTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteUtteranceEndTimeInNs;
- (void)deleteUtteranceStartTimeInNs;

@end
