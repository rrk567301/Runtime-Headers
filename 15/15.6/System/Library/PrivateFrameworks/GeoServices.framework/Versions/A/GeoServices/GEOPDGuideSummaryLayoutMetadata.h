@interface GEOPDGuideSummaryLayoutMetadata : PBCodable <NSCopying> {
    int _guideSummaryType;
    struct { unsigned char has_guideSummaryType : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
