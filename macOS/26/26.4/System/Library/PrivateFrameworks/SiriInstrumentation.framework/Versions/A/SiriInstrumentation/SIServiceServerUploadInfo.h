@class NSData;

@interface SIServiceServerUploadInfo : SISchemaInstrumentationMessage {
    struct { unsigned char ns_server_upload_ts : 1; } _has;
}

@property (nonatomic) long long ns_server_upload_ts;
@property (nonatomic) BOOL hasNs_server_upload_ts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNs_server_upload_ts;

@end
