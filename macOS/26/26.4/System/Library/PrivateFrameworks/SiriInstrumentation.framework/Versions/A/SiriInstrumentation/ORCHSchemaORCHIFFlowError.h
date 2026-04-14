@class NSData, ORCHSchemaORCHError;

@interface ORCHSchemaORCHIFFlowError : SISchemaInstrumentationMessage {
    struct { unsigned char ifflowErrorCode : 1; } _has;
}

@property (retain, nonatomic) ORCHSchemaORCHError *underLyingError;
@property (nonatomic) BOOL hasUnderLyingError;
@property (nonatomic) long long ifflowErrorCode;
@property (nonatomic) BOOL hasIfflowErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIfflowErrorCode;
- (void)deleteUnderLyingError;

@end
