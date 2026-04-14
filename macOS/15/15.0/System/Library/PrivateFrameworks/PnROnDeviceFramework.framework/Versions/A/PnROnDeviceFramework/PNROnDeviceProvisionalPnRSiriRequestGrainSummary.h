@class NSString, PNROnDeviceProvisionalPNRIntervalDurationMetric, NSData;

@interface PNROnDeviceProvisionalPnRSiriRequestGrainSummary : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *turnId;
@property (nonatomic) BOOL hasTurnId;
@property (copy, nonatomic) NSString *requestStatus;
@property (nonatomic) BOOL hasRequestStatus;
@property (retain, nonatomic) PNROnDeviceProvisionalPNRIntervalDurationMetric *srt;
@property (nonatomic) BOOL hasSrt;
@property (copy, nonatomic) NSString *error;
@property (nonatomic) BOOL hasError;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteError;
- (void)deleteRequestStatus;
- (void)deleteSrt;
- (void)deleteTurnId;

@end
