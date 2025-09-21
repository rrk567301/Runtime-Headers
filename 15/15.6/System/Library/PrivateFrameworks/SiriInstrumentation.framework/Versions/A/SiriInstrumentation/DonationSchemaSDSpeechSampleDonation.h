@class NSString, NSArray, NSData, SISchemaUUID;

@interface DonationSchemaSDSpeechSampleDonation : SISchemaInstrumentationMessage {
    struct { unsigned char captureDate : 1; unsigned char audioCaptureDevice : 1; unsigned char locale : 1; unsigned char asrTask : 1; unsigned char evaluation : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *donationID;
@property (nonatomic) char hasDonationID;
@property (copy, nonatomic) NSString *donorBundleID;
@property (nonatomic) char hasDonorBundleID;
@property (nonatomic) unsigned long long captureDate;
@property (nonatomic) char hasCaptureDate;
@property (copy, nonatomic) NSArray *attributes;
@property (nonatomic) int audioCaptureDevice;
@property (nonatomic) char hasAudioCaptureDevice;
@property (nonatomic) int locale;
@property (nonatomic) char hasLocale;
@property (nonatomic) int asrTask;
@property (nonatomic) char hasAsrTask;
@property (copy, nonatomic) NSString *transcription;
@property (nonatomic) char hasTranscription;
@property (copy, nonatomic) NSString *expected;
@property (nonatomic) char hasExpected;
@property (nonatomic) int evaluation;
@property (nonatomic) char hasEvaluation;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)addAttributes:(int)a0;
- (int)attributesAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAsrTask;
- (void)deleteAttributes;
- (void)deleteAudioCaptureDevice;
- (void)deleteCaptureDate;
- (void)deleteDonationID;
- (void)deleteDonorBundleID;
- (void)deleteEvaluation;
- (void)deleteExpected;
- (void)deleteLocale;
- (void)deleteTranscription;
- (id)suppressMessageUnderConditions;

@end
