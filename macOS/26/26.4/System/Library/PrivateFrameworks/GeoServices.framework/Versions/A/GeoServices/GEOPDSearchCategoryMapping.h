@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchCategoryMapping : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_categoryId;
    long long _densityScore;
    NSMutableArray *_relatedCategories;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_densityScore : 1; unsigned char read_categoryId : 1; unsigned char read_relatedCategories : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
