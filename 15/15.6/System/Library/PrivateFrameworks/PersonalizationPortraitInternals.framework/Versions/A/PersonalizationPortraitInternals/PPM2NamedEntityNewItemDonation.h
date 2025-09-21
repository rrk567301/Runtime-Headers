@class NSString;

@interface PPM2NamedEntityNewItemDonation : PBCodable <NSCopying> {
    struct { unsigned char rank : 1; unsigned char algorithm : 1; unsigned char category : 1; unsigned char donationSource : 1; unsigned char newItem : 1; unsigned char userCreated : 1; } _has;
}

@property (nonatomic) char hasDonationSource;
@property (nonatomic) int donationSource;
@property (nonatomic) char hasCategory;
@property (nonatomic) int category;
@property (readonly, nonatomic) char hasDynamicCategory;
@property (retain, nonatomic) NSString *dynamicCategory;
@property (readonly, nonatomic) char hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) char hasNewItem;
@property (nonatomic) char newItem;
@property (nonatomic) char hasAlgorithm;
@property (nonatomic) int algorithm;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) char hasUserCreated;
@property (nonatomic) char userCreated;
@property (nonatomic) char hasRank;
@property (nonatomic) long long rank;

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
- (int)StringAsCategory:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsDonationSource:(id)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)algorithmAsString:(int)a0;
- (id)donationSourceAsString:(int)a0;

@end
