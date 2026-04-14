@class ASRSchemaASRPackage, NSString, NSData;

@interface ASRSchemaASRPackageGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isFinal : 1; } _has;
}

@property (retain, nonatomic) ASRSchemaASRPackage *package;
@property (nonatomic) BOOL hasPackage;
@property (nonatomic) BOOL isFinal;
@property (nonatomic) BOOL hasIsFinal;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLoggableSharedUserId;
- (void)deletePackage;
- (void)deleteIsFinal;
- (void)deleteResultCandidateId;

@end
