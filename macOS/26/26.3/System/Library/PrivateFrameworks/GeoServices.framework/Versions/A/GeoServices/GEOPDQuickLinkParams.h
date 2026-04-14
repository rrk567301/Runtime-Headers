@class PBUnknownFields;

@interface GEOPDQuickLinkParams : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _quickLinkItemIndex;
    struct { unsigned char has_quickLinkItemIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasQuickLinkItemIndex;
@property (nonatomic) int quickLinkItemIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;

@end
