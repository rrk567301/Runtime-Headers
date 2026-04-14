@class NSString;

@interface CLPRegulatoryDomainEstimate : PBCodable <NSCopying> {
    struct { unsigned char isInDisputedArea : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasIsInDisputedArea;
@property (nonatomic) BOOL isInDisputedArea;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
