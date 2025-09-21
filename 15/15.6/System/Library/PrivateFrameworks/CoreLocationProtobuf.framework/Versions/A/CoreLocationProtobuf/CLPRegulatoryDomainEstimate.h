@class NSString;

@interface CLPRegulatoryDomainEstimate : PBCodable <NSCopying> {
    struct { unsigned char isInDisputedArea : 1; } _has;
}

@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) char hasIsInDisputedArea;
@property (nonatomic) char isInDisputedArea;

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
