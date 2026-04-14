@class NSString, PBUnknownFields;

@interface GEOPDPOIClaim : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_claimUrl;
    BOOL _isClaimable;
    BOOL _isClaimed;
    struct { unsigned char has_isClaimable : 1; unsigned char has_isClaimed : 1; } _flags;
}

+ (id)poiClaimForPlaceData:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
