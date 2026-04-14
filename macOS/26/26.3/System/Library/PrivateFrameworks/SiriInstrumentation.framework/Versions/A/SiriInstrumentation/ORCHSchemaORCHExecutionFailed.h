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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteErrorString;

@end
