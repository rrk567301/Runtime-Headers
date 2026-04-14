@class NSData;

@interface NLXSchemaCDMServiceFailed : SISchemaInstrumentationMessage {
    struct { unsigned char code : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int code;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteCode;

@end
