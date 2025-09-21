@class NSString;

@interface PREAMResponseItem : PBCodable <NSCopying> {
    struct { unsigned char ageGroup : 1; unsigned char modelId : 1; unsigned char position : 1; unsigned char replyTextId : 1; unsigned char responseClassId : 1; unsigned char isApricotDevice : 1; unsigned char isCustomResponse : 1; unsigned char isRobotResponse : 1; } _has;
}

@property (nonatomic) char hasModelId;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) char hasResponseClassId;
@property (nonatomic) unsigned int responseClassId;
@property (nonatomic) char hasReplyTextId;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) char hasPosition;
@property (nonatomic) unsigned int position;
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
- (id)ageGroupAsString:(int)a0;

@end
