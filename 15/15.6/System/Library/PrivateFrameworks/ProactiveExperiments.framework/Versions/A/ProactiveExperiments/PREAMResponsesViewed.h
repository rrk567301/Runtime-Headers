@class NSString;

@interface PREAMResponsesViewed : PBCodable <NSCopying> {
    struct { unsigned char ageGroup : 1; unsigned char lastViewedIndex : 1; unsigned char isApricotDevice : 1; } _has;
}

@property (nonatomic) char hasLastViewedIndex;
@property (nonatomic) unsigned int lastViewedIndex;
@property (readonly, nonatomic) char hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) char hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) char hasTreatmentModelName;
@property (retain, nonatomic) NSString *treatmentModelName;
@property (readonly, nonatomic) char hasHostProcess;
@property (retain, nonatomic) NSString *hostProcess;
@property (nonatomic) char hasIsApricotDevice;
@property (nonatomic) char isApricotDevice;
@property (nonatomic) char hasAgeGroup;
@property (nonatomic) int ageGroup;

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
