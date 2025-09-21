@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRSampledAudioFileEnqueueFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char underlyingErrorCode : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalAsrId;
@property (nonatomic) char hasOriginalAsrId;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (nonatomic) char hasErrorDomain;
@property (nonatomic) int underlyingErrorCode;
@property (nonatomic) char hasUnderlyingErrorCode;
@property (copy, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) char hasUnderlyingErrorDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteErrorDomain;
- (void)deleteOriginalAsrId;
- (void)deleteUnderlyingErrorCode;
- (void)deleteUnderlyingErrorDomain;
- (id)suppressMessageUnderConditions;

@end
