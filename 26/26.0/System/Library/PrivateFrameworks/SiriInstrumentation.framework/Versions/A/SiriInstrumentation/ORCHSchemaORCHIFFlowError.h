@class NSData, ORCHSchemaORCHError;

@interface ORCHSchemaORCHIFFlowError : SISchemaInstrumentationMessage {
    struct { unsigned char ifflowErrorCode : 1; } _has;
}

@property (retain, nonatomic) ORCHSchemaORCHError *underLyingError;
@property (nonatomic) BOOL hasUnderLyingError;
@property (nonatomic) long long ifflowErrorCode;
@property (nonatomic) BOOL hasIfflowErrorCode;
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
- (void)deleteIfflowErrorCode;
- (void)deleteUnderLyingError;

@end
