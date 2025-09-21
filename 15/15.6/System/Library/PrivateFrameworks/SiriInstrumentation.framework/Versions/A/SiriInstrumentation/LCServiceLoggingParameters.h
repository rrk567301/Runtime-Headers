@class NSData, NSString;

@interface LCServiceLoggingParameters : SISchemaInstrumentationMessage {
    struct { unsigned char qos : 1; unsigned char messageSizeQuotaInBytes : 1; unsigned char totalDiskSizeQuotaInBytes : 1; unsigned char optOutOfCompression : 1; unsigned char uploadSamplingRate : 1; unsigned char realtimeSamplingRate : 1; unsigned char overrideIntoSamplePopulation : 1; } _has;
}

@property (nonatomic) int qos;
@property (nonatomic) char hasQos;
@property (nonatomic) int messageSizeQuotaInBytes;
@property (nonatomic) char hasMessageSizeQuotaInBytes;
@property (nonatomic) int totalDiskSizeQuotaInBytes;
@property (nonatomic) char hasTotalDiskSizeQuotaInBytes;
@property (nonatomic) char optOutOfCompression;
@property (nonatomic) char hasOptOutOfCompression;
@property (nonatomic) float uploadSamplingRate;
@property (nonatomic) char hasUploadSamplingRate;
@property (nonatomic) float realtimeSamplingRate;
@property (nonatomic) char hasRealtimeSamplingRate;
@property (copy, nonatomic) NSData *entropy;
@property (nonatomic) char hasEntropy;
@property (nonatomic) char overrideIntoSamplePopulation;
@property (nonatomic) char hasOverrideIntoSamplePopulation;
@property (copy, nonatomic) NSString *uploadEndpointURL;
@property (nonatomic) char hasUploadEndpointURL;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTotalDiskSizeQuotaInBytes;
- (void)deleteEntropy;
- (void)deleteMessageSizeQuotaInBytes;
- (void)deleteOptOutOfCompression;
- (void)deleteOverrideIntoSamplePopulation;
- (void)deleteQos;
- (void)deleteRealtimeSamplingRate;
- (void)deleteUploadEndpointURL;
- (void)deleteUploadSamplingRate;
- (id)suppressMessageUnderConditions;

@end
