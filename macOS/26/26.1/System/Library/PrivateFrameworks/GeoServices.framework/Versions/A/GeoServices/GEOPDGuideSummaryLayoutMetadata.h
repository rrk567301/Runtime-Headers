@interface GEOPDGuideSummaryLayoutMetadata : PBCodable <NSCopying> {
    int _guideSummaryType;
    struct { unsigned char has_guideSummaryType : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
