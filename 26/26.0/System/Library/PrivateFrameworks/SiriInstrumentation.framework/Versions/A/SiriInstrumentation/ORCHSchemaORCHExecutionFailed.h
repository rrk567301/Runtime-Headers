@class NSString, NSData;

@interface ORCHSchemaORCHExecutionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorDomain : 1; unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSString *errorString;
@property (nonatomic) BOOL hasErrorString;
@property (nonatomic) int errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteErrorString;

@end
