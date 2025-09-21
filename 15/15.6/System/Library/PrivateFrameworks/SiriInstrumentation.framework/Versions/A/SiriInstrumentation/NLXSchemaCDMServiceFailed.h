@class NSData;

@interface NLXSchemaCDMServiceFailed : SISchemaInstrumentationMessage {
    struct { unsigned char code : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int code;
@property (nonatomic) char hasCode;
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
- (void)deleteErrorCode;
- (void)deleteCode;
- (id)suppressMessageUnderConditions;

@end
