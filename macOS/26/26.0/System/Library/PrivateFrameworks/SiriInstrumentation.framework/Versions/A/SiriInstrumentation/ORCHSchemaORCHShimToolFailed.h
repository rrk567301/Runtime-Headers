@class NSData;

@interface ORCHSchemaORCHShimToolFailed : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char errorDomain : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) int errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteExists;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;

@end
