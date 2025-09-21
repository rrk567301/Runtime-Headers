@class NSData;

@interface ASRSchemaASRFullPayloadCorrectionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorType : 1; unsigned char responseTimeInNs : 1; } _has;
}

@property (nonatomic) int errorType;
@property (nonatomic) char hasErrorType;
@property (nonatomic) unsigned long long responseTimeInNs;
@property (nonatomic) char hasResponseTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorType;
- (void)deleteResponseTimeInNs;
- (id)suppressMessageUnderConditions;

@end
