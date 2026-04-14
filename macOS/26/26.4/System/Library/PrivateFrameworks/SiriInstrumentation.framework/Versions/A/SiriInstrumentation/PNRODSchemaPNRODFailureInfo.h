@class NSArray, PNRODSchemaPNRError, NSData;

@interface PNRODSchemaPNRODFailureInfo : SISchemaInstrumentationMessage {
    struct { unsigned char failureType : 1; unsigned char failureSubType : 1; } _has;
}

@property (nonatomic) long long failureType;
@property (nonatomic) BOOL hasFailureType;
@property (nonatomic) long long failureSubType;
@property (nonatomic) BOOL hasFailureSubType;
@property (retain, nonatomic) PNRODSchemaPNRError *error;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) PNRODSchemaPNRError *underlyingError;
@property (nonatomic) BOOL hasUnderlyingError;
@property (retain, nonatomic) PNRODSchemaPNRError *underUnderlyingError;
@property (nonatomic) BOOL hasUnderUnderlyingError;
@property (copy, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearErrors;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;
- (void)deleteError;
- (void)deleteErrors;
- (void)deleteFailureSubType;
- (void)deleteFailureType;
- (void)deleteUnderUnderlyingError;
- (void)deleteUnderlyingError;

@end
