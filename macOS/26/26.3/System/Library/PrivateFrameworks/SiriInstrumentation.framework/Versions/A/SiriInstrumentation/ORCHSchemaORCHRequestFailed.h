@class NSData;

@interface ORCHSchemaORCHRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char errorDomain : 1; unsigned char orchErrorCode : 1; } _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int orchErrorCode;
@property (nonatomic) BOOL hasOrchErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteOrchErrorCode;

@end
