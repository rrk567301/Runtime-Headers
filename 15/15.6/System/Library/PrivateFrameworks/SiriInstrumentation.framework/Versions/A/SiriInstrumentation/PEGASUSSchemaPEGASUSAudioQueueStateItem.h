@class NSData;

@interface PEGASUSSchemaPEGASUSAudioQueueStateItem : SISchemaInstrumentationMessage {
    struct { unsigned char audioQueueStateItemType : 1; } _has;
}

@property (nonatomic) int audioQueueStateItemType;
@property (nonatomic) char hasAudioQueueStateItemType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioQueueStateItemType;
- (id)suppressMessageUnderConditions;

@end
