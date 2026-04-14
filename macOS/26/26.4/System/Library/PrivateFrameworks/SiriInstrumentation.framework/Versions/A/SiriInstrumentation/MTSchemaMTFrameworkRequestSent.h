@class NSString, NSData, SISchemaUUID;

@interface MTSchemaMTFrameworkRequestSent : SISchemaInstrumentationMessage {
    struct { unsigned char requestType : 1; unsigned char requestRoute : 1; unsigned char requestSize : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *frameworkRequestId;
@property (nonatomic) BOOL hasFrameworkRequestId;
@property (copy, nonatomic) NSString *qssSessionId;
@property (nonatomic) BOOL hasQssSessionId;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestRoute;
@property (nonatomic) BOOL hasRequestRoute;
@property (nonatomic) unsigned int requestSize;
@property (nonatomic) BOOL hasRequestSize;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFrameworkRequestId;
- (void)deleteModelVersion;
- (void)deleteQssSessionId;
- (void)deleteRequestRoute;
- (void)deleteRequestSize;
- (void)deleteRequestType;

@end
