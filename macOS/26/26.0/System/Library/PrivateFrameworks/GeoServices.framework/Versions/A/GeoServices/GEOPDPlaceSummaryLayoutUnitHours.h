@class NSMutableArray, PBDataReader;

@interface GEOPDPlaceSummaryLayoutUnitHours : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _allowedHoursStates;
    NSMutableArray *_linkedServiceCategoryIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_allowedHoursStates : 1; unsigned char read_linkedServiceCategoryIds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned long long allowedHoursStatesCount;
@property (readonly, nonatomic) int *allowedHoursStates;
@property (retain, nonatomic) NSMutableArray *linkedServiceCategoryIds;

+ (BOOL)isValid:(id)a0;
+ (Class)linkedServiceCategoryIdType;

- (id)typeAsString:(int)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsAllowedHoursStates:(id)a0;
- (id)linkedServiceCategoryIdAtIndex:(unsigned long long)a0;
- (void)addAllowedHoursState:(int)a0;
- (void)addLinkedServiceCategoryId:(id)a0;
- (int)allowedHoursStateAtIndex:(unsigned long long)a0;
- (id)allowedHoursStatesAsString:(int)a0;
- (void)clearAllowedHoursStates;
- (void)clearLinkedServiceCategoryIds;
- (unsigned long long)linkedServiceCategoryIdsCount;
- (void)setAllowedHoursStates:(int *)a0 count:(unsigned long long)a1;

@end
