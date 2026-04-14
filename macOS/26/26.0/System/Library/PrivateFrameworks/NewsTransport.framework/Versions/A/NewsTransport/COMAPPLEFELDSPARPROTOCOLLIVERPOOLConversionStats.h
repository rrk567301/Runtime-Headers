@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats : PBCodable <NSCopying> {
    struct { unsigned char conversions : 1; unsigned char impressions : 1; } _has;
}

@property (nonatomic) BOOL hasConversions;
@property (nonatomic) double conversions;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) double impressions;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
