@class PBUnknownFields, PBDataReader, GEOPDSearchSectionList, NSMutableArray;

@interface GEOPDRefinementSessionState : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_relatedEntitySections;
    GEOPDSearchSectionList *_searchSectionList;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_relatedEntitySections : 1; unsigned char read_searchSectionList : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *relatedEntitySections;
@property (readonly, nonatomic) BOOL hasSearchSectionList;
@property (retain, nonatomic) GEOPDSearchSectionList *searchSectionList;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)relatedEntitySectionType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)clearRelatedEntitySections;
- (void)addRelatedEntitySection:(id)a0;
- (unsigned long long)relatedEntitySectionsCount;
- (id)relatedEntitySectionAtIndex:(unsigned long long)a0;

@end
