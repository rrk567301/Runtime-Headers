@class NSString, NSData, SISchemaUUID;

@interface MTSchemaMTFrameworkRequestSent : SISchemaInstrumentationMessage {
    struct { unsigned char requestType : 1; unsigned char requestRoute : 1; unsigned char requestSize : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *frameworkRequestId;
@property (nonatomic) char hasFrameworkRequestId;
@property (copy, nonatomic) NSString *qssSessionId;
@property (nonatomic) char hasQssSessionId;
@property (nonatomic) int requestType;
@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestRoute;
@property (nonatomic) char hasRequestRoute;
@property (nonatomic) unsigned int requestSize;
@property (nonatomic) char hasRequestSize;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFrameworkRequestId;
- (void)deleteQssSessionId;
- (void)deleteRequestRoute;
- (void)deleteRequestSize;
- (void)deleteRequestType;
- (id)suppressMessageUnderConditions;

@end
