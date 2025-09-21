@class GATSchemaGATError, NSData;

@interface GATSchemaGATCreateSessionEventFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorDomain : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (retain, nonatomic) GATSchemaGATError *error;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) GATSchemaGATError *underlyingError;
@property (nonatomic) BOOL hasUnderlyingError;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteErrorCode;
- (void)deleteError;
- (void)deleteErrorDomain;
- (void)deleteUnderlyingError;

@end
