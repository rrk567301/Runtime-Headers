@class FLOWSchemaFLOWHomeContext, FLOWSchemaFLOWHomeCommunicationSendOrReply, NSData;

@interface FLOWSchemaFLOWHomeCommunicationContext : SISchemaInstrumentationMessage {
    struct { unsigned char taskType : 1; } _has;
}

@property (retain, nonatomic) FLOWSchemaFLOWHomeContext *homeContext;
@property (nonatomic) char hasHomeContext;
@property (nonatomic) int taskType;
@property (nonatomic) char hasTaskType;
@property (retain, nonatomic) FLOWSchemaFLOWHomeCommunicationSendOrReply *sendOrReplyContext;
@property (nonatomic) char hasSendOrReplyContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTaskcontext;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteHomeContext;
- (void)deleteSendOrReplyContext;
- (void)deleteTaskType;
- (id)suppressMessageUnderConditions;

@end
