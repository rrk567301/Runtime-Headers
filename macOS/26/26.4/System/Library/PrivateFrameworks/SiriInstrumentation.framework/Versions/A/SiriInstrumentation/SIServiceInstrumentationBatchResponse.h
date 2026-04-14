@class NSData, NSString;

@interface SIServiceInstrumentationBatchResponse : SISchemaInstrumentationMessage {
    struct { unsigned char status_code : 1; } _has;
}

@property (copy, nonatomic) NSData *batch_id;
@property (nonatomic) BOOL hasBatch_id;
@property (nonatomic) int status_code;
@property (nonatomic) BOOL hasStatus_code;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL hasMessage;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMessage;
- (void)deleteBatch_id;
- (void)deleteStatus_code;

@end
