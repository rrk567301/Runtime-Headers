@class NSData;

@interface NLXSchemaCDMClientSetupFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char errorDomain : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) char hasReason;
@property (nonatomic) int errorDomain;
@property (nonatomic) char hasErrorDomain;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (id)suppressMessageUnderConditions;

@end
