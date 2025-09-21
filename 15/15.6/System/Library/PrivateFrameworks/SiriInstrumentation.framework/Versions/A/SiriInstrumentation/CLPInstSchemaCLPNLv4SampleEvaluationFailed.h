@class NSData;

@interface CLPInstSchemaCLPNLv4SampleEvaluationFailed : SISchemaInstrumentationMessage {
    struct { unsigned char userProfileSandboxFailure : 1; unsigned char xpcClientDisconnected : 1; unsigned char xpcClientNLURequestTimeout : 1; } _has;
}

@property (nonatomic) char userProfileSandboxFailure;
@property (nonatomic) char hasUserProfileSandboxFailure;
@property (nonatomic) char xpcClientDisconnected;
@property (nonatomic) char hasXpcClientDisconnected;
@property (nonatomic) char xpcClientNLURequestTimeout;
@property (nonatomic) char hasXpcClientNLURequestTimeout;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUserProfileSandboxFailure;
- (void)deleteXpcClientDisconnected;
- (void)deleteXpcClientNLURequestTimeout;
- (id)suppressMessageUnderConditions;

@end
