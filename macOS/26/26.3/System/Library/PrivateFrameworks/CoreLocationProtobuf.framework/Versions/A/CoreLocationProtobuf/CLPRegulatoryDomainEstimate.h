@class NSString;

@interface CLPRegulatoryDomainEstimate : PBCodable <NSCopying> {
    struct { unsigned char isInDisputedArea : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasIsInDisputedArea;
@property (nonatomic) BOOL isInDisputedArea;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
