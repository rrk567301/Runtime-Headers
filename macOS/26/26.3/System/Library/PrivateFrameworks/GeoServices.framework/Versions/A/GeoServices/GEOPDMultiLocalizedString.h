@class NSMutableArray, PBUnknownFields;

@interface GEOPDMultiLocalizedString : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedStrings;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)bestLocalizedName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
