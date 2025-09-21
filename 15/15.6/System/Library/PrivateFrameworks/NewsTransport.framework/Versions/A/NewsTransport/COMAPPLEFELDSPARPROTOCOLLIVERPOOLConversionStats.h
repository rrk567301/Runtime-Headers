@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats : PBCodable <NSCopying> {
    struct { unsigned char conversions : 1; unsigned char impressions : 1; } _has;
}

@property (nonatomic) char hasConversions;
@property (nonatomic) double conversions;
@property (nonatomic) char hasImpressions;
@property (nonatomic) double impressions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
