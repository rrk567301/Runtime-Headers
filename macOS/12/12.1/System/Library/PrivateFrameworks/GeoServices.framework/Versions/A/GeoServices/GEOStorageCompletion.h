@class PBUnknownFields, GEOPDAutocompleteEntry;

@interface GEOStorageCompletion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteEntry *_autocompleteEntry;
}

@property (readonly, nonatomic) BOOL hasAutocompleteEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (id)storageForCompletionItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)applyToUserSearchInput:(id)a0;

@end
