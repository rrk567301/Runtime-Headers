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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsVoiceProfileSyncSuccess;
- (void)deleteEnrollmentId;
- (void)deleteLocale;
- (void)deleteVoiceProfileSyncFailureReason;

@end
