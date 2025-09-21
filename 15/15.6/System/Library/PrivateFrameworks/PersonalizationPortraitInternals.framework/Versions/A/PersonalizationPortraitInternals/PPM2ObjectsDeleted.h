@interface PPM2ObjectsDeleted : PBCodable <NSCopying> {
    struct { unsigned char domain : 1; unsigned char donationSource : 1; unsigned char error : 1; } _has;
}

@property (nonatomic) char hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) char hasError;
@property (nonatomic) char error;
@property (nonatomic) char hasDonationSource;
@property (nonatomic) int donationSource;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;
- (int)StringAsDonationSource:(id)a0;
- (id)donationSourceAsString:(int)a0;

@end
