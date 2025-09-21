@class NSString, NETSchemaNETError, NSData;

@interface NETSchemaNETSessionConnectionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char connectionType : 1; unsigned char connectionMode : 1; unsigned char sessionType : 1; unsigned char networkSessionState : 1; unsigned char isWwanPreferred : 1; unsigned char isDormant : 1; unsigned char sendBufferSize : 1; } _has;
}

@property (nonatomic) int connectionType;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) int connectionMode;
@property (nonatomic) char hasConnectionMode;
@property (nonatomic) int sessionType;
@property (nonatomic) char hasSessionType;
@property (nonatomic) int networkSessionState;
@property (nonatomic) char hasNetworkSessionState;
@property (nonatomic) char isWwanPreferred;
@property (nonatomic) char hasIsWwanPreferred;
@property (nonatomic) char isDormant;
@property (nonatomic) char hasIsDormant;
@property (nonatomic) unsigned long long sendBufferSize;
@property (nonatomic) char hasSendBufferSize;
@property (copy, nonatomic) NSString *policyId;
@property (nonatomic) char hasPolicyId;
@property (retain, nonatomic) NETSchemaNETError *error;
@property (nonatomic) char hasError;
@property (retain, nonatomic) NETSchemaNETError *underlyingError;
@property (nonatomic) char hasUnderlyingError;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsDormant;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteConnectionMode;
- (void)deleteConnectionType;
- (void)deleteError;
- (void)deleteIsWwanPreferred;
- (void)deleteNetworkSessionState;
- (void)deletePolicyId;
- (void)deleteSendBufferSize;
- (void)deleteSessionType;
- (void)deleteUnderlyingError;
- (id)suppressMessageUnderConditions;

@end
