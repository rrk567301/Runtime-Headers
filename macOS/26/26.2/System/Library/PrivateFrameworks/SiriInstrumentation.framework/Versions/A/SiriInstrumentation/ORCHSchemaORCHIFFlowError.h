@class NSData, ORCHSchemaORCHError;

@interface ORCHSchemaORCHIFFlowError : SISchemaInstrumentationMessage {
    struct { unsigned char ifflowErrorCode : 1; } _has;
}

@property (retain, nonatomic) ORCHSchemaORCHError *underLyingError;
@property (nonatomic) BOOL hasUnderLyingError;
@property (nonatomic) long long ifflowErrorCode;
@property (nonatomic) BOOL hasIfflowErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIfflowErrorCode;
- (void)deleteUnderLyingError;

@end
