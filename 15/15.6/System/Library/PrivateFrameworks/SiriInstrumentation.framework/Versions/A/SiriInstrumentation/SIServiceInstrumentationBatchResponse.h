@class NSData, NSString;

@interface SIServiceInstrumentationBatchResponse : SISchemaInstrumentationMessage {
    struct { unsigned char status_code : 1; } _has;
}

@property (copy, nonatomic) NSData *batch_id;
@property (nonatomic) char hasBatch_id;
@property (nonatomic) int status_code;
@property (nonatomic) char hasStatus_code;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) char hasMessage;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMessage;
- (void)deleteBatch_id;
- (void)deleteStatus_code;
- (id)suppressMessageUnderConditions;

@end
