@class NSString;

@interface BMPBUserProofingEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) char hasAge;
@property (retain, nonatomic) NSString *age;
@property (readonly, nonatomic) char hasGender;
@property (retain, nonatomic) NSString *gender;
@property (readonly, nonatomic) char hasSkinTone;
@property (retain, nonatomic) NSString *skinTone;
@property (readonly, nonatomic) char hasEthnicity;
@property (retain, nonatomic) NSString *ethnicity;
@property (readonly, nonatomic) char hasDeviceLanguage;
@property (retain, nonatomic) NSString *deviceLanguage;
@property (readonly, nonatomic) char hasProofingDecision;
@property (retain, nonatomic) NSString *proofingDecision;
@property (readonly, nonatomic) char hasIssuer;
@property (retain, nonatomic) NSString *issuer;
@property (readonly, nonatomic) char hasLivenessAssessment;
@property (retain, nonatomic) NSString *livenessAssessment;
@property (readonly, nonatomic) char hasGestureAssessment;
@property (retain, nonatomic) NSString *gestureAssessment;

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
