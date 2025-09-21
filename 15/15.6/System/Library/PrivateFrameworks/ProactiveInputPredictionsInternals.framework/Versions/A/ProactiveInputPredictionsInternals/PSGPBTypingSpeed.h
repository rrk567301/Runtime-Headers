@class NSString;

@interface PSGPBTypingSpeed : PBCodable <NSCopying> {
    struct { unsigned char messageDurationMilliseconds : 1; unsigned char messageLength : 1; unsigned char messageWords : 1; } _has;
}

@property (readonly, nonatomic) char hasZkwExperimentId;
@property (retain, nonatomic) NSString *zkwExperimentId;
@property (readonly, nonatomic) char hasZkwTreatmentId;
@property (retain, nonatomic) NSString *zkwTreatmentId;
@property (readonly, nonatomic) char hasZkwTreatmentName;
@property (retain, nonatomic) NSString *zkwTreatmentName;
@property (readonly, nonatomic) char hasWbExperimentId;
@property (retain, nonatomic) NSString *wbExperimentId;
@property (readonly, nonatomic) char hasWbTreatmentId;
@property (retain, nonatomic) NSString *wbTreatmentId;
@property (readonly, nonatomic) char hasWbTreatmentName;
@property (retain, nonatomic) NSString *wbTreatmentName;
@property (readonly, nonatomic) char hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (nonatomic) char hasMessageDurationMilliseconds;
@property (nonatomic) int messageDurationMilliseconds;
@property (nonatomic) char hasMessageLength;
@property (nonatomic) int messageLength;
@property (nonatomic) char hasMessageWords;
@property (nonatomic) int messageWords;

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

@end
