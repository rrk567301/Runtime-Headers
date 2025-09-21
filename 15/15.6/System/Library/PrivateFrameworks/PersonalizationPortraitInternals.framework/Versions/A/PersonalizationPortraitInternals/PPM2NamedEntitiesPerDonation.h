@class NSString;

@interface PPM2NamedEntitiesPerDonation : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; unsigned char donationSource : 1; } _has;
}

@property (nonatomic) char hasDonationSource;
@property (nonatomic) int donationSource;
@property (readonly, nonatomic) char hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) char hasAlgorithm;
@property (nonatomic) int algorithm;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

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
- (int)StringAsDonationSource:(id)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)algorithmAsString:(int)a0;
- (id)donationSourceAsString:(int)a0;

@end
