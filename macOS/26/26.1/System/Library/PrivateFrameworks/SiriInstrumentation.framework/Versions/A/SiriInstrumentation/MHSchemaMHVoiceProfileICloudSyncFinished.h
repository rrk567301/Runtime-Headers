@class NSString, NSData;

@interface MHSchemaMHVoiceProfileICloudSyncFinished : SISchemaInstrumentationMessage {
    struct { unsigned char isVoiceProfileSyncSuccess : 1; unsigned char locale : 1; } _has;
}

@property (copy, nonatomic) NSString *enrollmentId;
@property (nonatomic) BOOL hasEnrollmentId;
@property (nonatomic) BOOL isVoiceProfileSyncSuccess;
@property (nonatomic) BOOL hasIsVoiceProfileSyncSuccess;
@property (copy, nonatomic) NSString *voiceProfileSyncFailureReason;
@property (nonatomic) BOOL hasVoiceProfileSyncFailureReason;
@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIsVoiceProfileSyncSuccess;
- (void)deleteEnrollmentId;
- (void)deleteLocale;
- (void)deleteVoiceProfileSyncFailureReason;

@end
