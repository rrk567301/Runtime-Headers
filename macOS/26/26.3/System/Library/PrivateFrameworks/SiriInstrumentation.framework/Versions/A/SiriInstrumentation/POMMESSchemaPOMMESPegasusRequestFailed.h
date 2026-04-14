@class NSData, POMMESSchemaPOMMESPegasusRequestArguments;

@interface POMMESSchemaPOMMESPegasusRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestArguments *requestArguments;
@property (nonatomic) BOOL hasRequestArguments;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteErrorCode;
- (void)deleteRequestArguments;

@end
