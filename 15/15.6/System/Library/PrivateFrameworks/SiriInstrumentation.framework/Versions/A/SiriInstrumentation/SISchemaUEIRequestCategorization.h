@class NSData;

@interface SISchemaUEIRequestCategorization : SISchemaInstrumentationMessage {
    struct { unsigned char requestType : 1; unsigned char requestStatus : 1; } _has;
}

@property (nonatomic) int requestType;
@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestStatus;
@property (nonatomic) char hasRequestStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestStatus;
- (void)deleteRequestType;
- (id)suppressMessageUnderConditions;

@end
