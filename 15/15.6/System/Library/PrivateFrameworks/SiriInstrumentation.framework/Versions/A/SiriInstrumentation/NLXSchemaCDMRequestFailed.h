@class NSData;

@interface NLXSchemaCDMRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char code : 1; unsigned char originalCode : 1; unsigned char errorCode : 1; unsigned char errorDomain : 1; } _has;
}

@property (nonatomic) int code;
@property (nonatomic) char hasCode;
@property (nonatomic) int originalCode;
@property (nonatomic) char hasOriginalCode;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) int errorDomain;
@property (nonatomic) char hasErrorDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteCode;
- (void)deleteErrorDomain;
- (void)deleteOriginalCode;
- (id)suppressMessageUnderConditions;

@end
