@class NSString, NSData;

@interface ASRSchemaASRSampledAudioFileStorageFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char underlyingErrorCode : 1; unsigned char sampledAudioStorageFailureReason : 1; } _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (nonatomic) char hasErrorDomain;
@property (nonatomic) int underlyingErrorCode;
@property (nonatomic) char hasUnderlyingErrorCode;
@property (copy, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) char hasUnderlyingErrorDomain;
@property (nonatomic) int sampledAudioStorageFailureReason;
@property (nonatomic) char hasSampledAudioStorageFailureReason;
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
- (void)deleteErrorDomain;
- (void)deleteSampledAudioStorageFailureReason;
- (void)deleteUnderlyingErrorCode;
- (void)deleteUnderlyingErrorDomain;
- (id)suppressMessageUnderConditions;

@end
