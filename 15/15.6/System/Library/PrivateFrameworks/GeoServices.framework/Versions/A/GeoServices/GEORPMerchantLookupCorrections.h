@interface GEORPMerchantLookupCorrections : PBCodable <NSCopying> {
    char _isCategoryIncorrect;
    char _isMerchantIncorrect;
    char _isOtherIssue;
    struct { unsigned char has_isCategoryIncorrect : 1; unsigned char has_isMerchantIncorrect : 1; unsigned char has_isOtherIssue : 1; } _flags;
}

@property (nonatomic) char hasIsCategoryIncorrect;
@property (nonatomic) char isCategoryIncorrect;
@property (nonatomic) char hasIsMerchantIncorrect;
@property (nonatomic) char isMerchantIncorrect;
@property (nonatomic) char hasIsOtherIssue;
@property (nonatomic) char isOtherIssue;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
