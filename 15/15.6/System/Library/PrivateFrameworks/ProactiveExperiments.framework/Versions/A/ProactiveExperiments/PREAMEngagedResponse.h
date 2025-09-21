@class NSString;

@interface PREAMEngagedResponse : PBCodable <NSCopying> {
    struct { unsigned char ageGroup : 1; unsigned char generationStatus : 1; unsigned char inputMethod : 1; unsigned char modelId : 1; unsigned char numberOfCustomResponses : 1; unsigned char numberOfResponsesGenerated : 1; unsigned char numberOfRobotResponses : 1; unsigned char position : 1; unsigned char replyTextId : 1; unsigned char responseClassId : 1; unsigned char hasQuestionMark : 1; unsigned char isApricotDevice : 1; unsigned char isCustomResponse : 1; unsigned char isRobotResponse : 1; } _has;
}

@property (nonatomic) char hasModelId;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) char hasResponseClassId;
@property (nonatomic) unsigned int responseClassId;
@property (nonatomic) char hasReplyTextId;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) char hasPosition;
@property (nonatomic) unsigned int position;
@property (nonatomic) char hasInputMethod;
@property (nonatomic) int inputMethod;
@property (nonatomic) char hasGenerationStatus;
@property (nonatomic) int generationStatus;
@property (nonatomic) char hasNumberOfResponsesGenerated;
@property (nonatomic) unsigned int numberOfResponsesGenerated;
@property (nonatomic) char hasNumberOfCustomResponses;
@property (nonatomic) unsigned int numberOfCustomResponses;
@property (nonatomic) char hasNumberOfRobotResponses;
@property (nonatomic) unsigned int numberOfRobotResponses;
@property (readonly, nonatomic) char hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) char hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) char hasTreatmentModelName;
@property (retain, nonatomic) NSString *treatmentModelName;
@property (readonly, nonatomic) char hasHostProcess;
@property (retain, nonatomic) NSString *hostProcess;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) char hasLang;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) char hasIsApricotDevice;
@property (nonatomic) char isApricotDevice;
@property (nonatomic) char hasAgeGroup;
@property (nonatomic) int ageGroup;
@property (nonatomic) char hasHasQuestionMark;
@property (nonatomic) char hasQuestionMark;
@property (nonatomic) char hasIsCustomResponse;
@property (nonatomic) char isCustomResponse;
@property (nonatomic) char hasIsRobotResponse;
@property (nonatomic) char isRobotResponse;

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
- (int)StringAsAgeGroup:(id)a0;
- (int)StringAsInputMethod:(id)a0;
- (int)StringAsGenerationStatus:(id)a0;
- (id)ageGroupAsString:(int)a0;
- (id)generationStatusAsString:(int)a0;
- (id)inputMethodAsString:(int)a0;

@end
