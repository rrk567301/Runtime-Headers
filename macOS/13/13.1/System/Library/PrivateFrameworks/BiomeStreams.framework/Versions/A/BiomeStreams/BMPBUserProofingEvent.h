@class NSString;

@interface BMPBUserProofingEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasAge;
@property (retain, nonatomic) NSString *age;
@property (readonly, nonatomic) BOOL hasGender;
@property (retain, nonatomic) NSString *gender;
@property (readonly, nonatomic) BOOL hasSkinTone;
@property (retain, nonatomic) NSString *skinTone;
@property (readonly, nonatomic) BOOL hasField;
@property (retain, nonatomic) NSString *field;
@property (readonly, nonatomic) BOOL hasDeviceLanguage;
@property (retain, nonatomic) NSString *deviceLanguage;
@property (readonly, nonatomic) BOOL hasProofingDecision;
@property (retain, nonatomic) NSString *proofingDecision;
@property (readonly, nonatomic) BOOL hasIssuer;
@property (retain, nonatomic) NSString *issuer;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
