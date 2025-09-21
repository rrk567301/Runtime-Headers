@class NSString;

@interface BCSVisibility : PBCodable <NSCopying> {
    struct { unsigned char ratio : 1; } _has;
}

@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) char hasCountry;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) char hasRatio;
@property (nonatomic) double ratio;

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
