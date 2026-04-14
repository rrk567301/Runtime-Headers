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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteMessage;
- (void)deleteBatch_id;
- (void)deleteStatus_code;

@end
