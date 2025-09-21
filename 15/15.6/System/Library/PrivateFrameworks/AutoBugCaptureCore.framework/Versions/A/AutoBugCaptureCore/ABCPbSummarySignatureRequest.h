@class NSString, NSMutableArray;

@interface ABCPbSummarySignatureRequest : PBRequest <NSCopying> {
    struct { unsigned char caseClosedTime : 1; unsigned char caseStartTime : 1; unsigned char logSizeTotal : 1; unsigned char remoteTrigger : 1; } _has;
}

@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasSubtype;
@property (retain, nonatomic) NSString *subtype;
@property (readonly, nonatomic) char hasSubtypeContext;
@property (retain, nonatomic) NSString *subtypeContext;
@property (readonly, nonatomic) char hasCaseIdentifier;
@property (retain, nonatomic) NSString *caseIdentifier;
@property (readonly, nonatomic) char hasProcess;
@property (retain, nonatomic) NSString *process;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) char hasBuildVariant;
@property (retain, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) char hasCaseGroupIdentifier;
@property (retain, nonatomic) NSString *caseGroupIdentifier;
@property (nonatomic) char hasLogSizeTotal;
@property (nonatomic) unsigned int logSizeTotal;
@property (nonatomic) char hasCaseClosedTime;
@property (nonatomic) double caseClosedTime;
@property (readonly, nonatomic) char hasCaseClosureType;
@property (retain, nonatomic) NSString *caseClosureType;
@property (nonatomic) char hasCaseStartTime;
@property (nonatomic) double caseStartTime;
@property (readonly, nonatomic) char hasCaseContext;
@property (retain, nonatomic) NSString *caseContext;
@property (readonly, nonatomic) char hasCaseDampeningType;
@property (retain, nonatomic) NSString *caseDampeningType;
@property (readonly, nonatomic) char hasCaseEffectiveProcess;
@property (retain, nonatomic) NSString *caseEffectiveProcess;
@property (readonly, nonatomic) char hasCaseRelatedProcesses;
@property (retain, nonatomic) NSString *caseRelatedProcesses;
@property (readonly, nonatomic) char hasCaseThresholdValues;
@property (retain, nonatomic) NSString *caseThresholdValues;
@property (nonatomic) char hasRemoteTrigger;
@property (nonatomic) char remoteTrigger;
@property (retain, nonatomic) NSMutableArray *attachments;

+ (Class)attachmentsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAttachments:(id)a0;
- (id)attachmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)attachmentsCount;
- (void)clearAttachments;

@end
