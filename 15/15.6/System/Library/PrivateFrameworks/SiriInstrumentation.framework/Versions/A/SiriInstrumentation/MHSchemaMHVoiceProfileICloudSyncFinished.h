@class NSString, NSData;

@interface MHSchemaMHVoiceProfileICloudSyncFinished : SISchemaInstrumentationMessage {
    struct { unsigned char isVoiceProfileSyncSuccess : 1; unsigned char locale : 1; } _has;
}

@property (copy, nonatomic) NSString *enrollmentId;
@property (nonatomic) char hasEnrollmentId;
@property (nonatomic) char isVoiceProfileSyncSuccess;
@property (nonatomic) char hasIsVoiceProfileSyncSuccess;
@property (copy, nonatomic) NSString *voiceProfileSyncFailureReason;
@property (nonatomic) char hasVoiceProfileSyncFailureReason;
@property (nonatomic) int locale;
@property (nonatomic) char hasLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsVoiceProfileSyncSuccess;
- (void)deleteEnrollmentId;
- (void)deleteLocale;
- (void)deleteVoiceProfileSyncFailureReason;
- (id)suppressMessageUnderConditions;

@end
