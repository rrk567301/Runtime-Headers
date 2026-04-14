@class NSString, NSData;

@interface ASRSchemaASRSampledAudioFileStorageFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char underlyingErrorCode : 1; unsigned char sampledAudioStorageFailureReason : 1; } _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int underlyingErrorCode;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (copy, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) BOOL hasUnderlyingErrorDomain;
@property (nonatomic) int sampledAudioStorageFailureReason;
@property (nonatomic) BOOL hasSampledAudioStorageFailureReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteSampledAudioStorageFailureReason;
- (void)deleteUnderlyingErrorCode;
- (void)deleteUnderlyingErrorDomain;

@end
