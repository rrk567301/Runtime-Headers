@class FLOWSchemaFLOWHomeContext, FLOWSchemaFLOWHomeCommunicationSendOrReply, NSData;

@interface FLOWSchemaFLOWHomeCommunicationContext : SISchemaInstrumentationMessage {
    struct { unsigned char taskType : 1; } _has;
}

@property (retain, nonatomic) FLOWSchemaFLOWHomeContext *homeContext;
@property (nonatomic) BOOL hasHomeContext;
@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (retain, nonatomic) FLOWSchemaFLOWHomeCommunicationSendOrReply *sendOrReplyContext;
@property (nonatomic) BOOL hasSendOrReplyContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTaskcontext;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteHomeContext;
- (void)deleteSendOrReplyContext;
- (void)deleteTaskType;

@end
