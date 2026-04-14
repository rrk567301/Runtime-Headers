@class NSData;

@interface CLPInstSchemaCLPCDMReplayTaskEnded : SISchemaInstrumentationMessage {
    struct { unsigned char replayedSampleCount : 1; } _has;
}

@property (nonatomic) unsigned int replayedSampleCount;
@property (nonatomic) BOOL hasReplayedSampleCount;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReplayedSampleCount;
- (id)suppressMessageUnderConditions;

@end
