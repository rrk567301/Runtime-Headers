@interface PPM2DonationInterval : PBCodable <NSCopying> {
    struct { unsigned char domain : 1; unsigned char interval : 1; unsigned char source : 1; unsigned char isFirstDonation : 1; } _has;
}

@property (nonatomic) char hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (nonatomic) char hasIsFirstDonation;
@property (nonatomic) char isFirstDonation;
@property (nonatomic) char hasInterval;
@property (nonatomic) unsigned int interval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;

@end
