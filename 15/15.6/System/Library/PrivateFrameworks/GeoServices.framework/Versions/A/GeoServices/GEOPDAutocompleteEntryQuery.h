@class PBUnknownFields, NSString, PBDataReader, NSMutableArray, GEOStyleAttributes;

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_completion;
    NSMutableArray *_resultRefinements;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _tapBehavior;
    char _queryHasAttributeIntentsInRefinements;
    char _showIntermediateStateTapBehaviorListView;
    struct { unsigned char has_tapBehavior : 1; unsigned char has_queryHasAttributeIntentsInRefinements : 1; unsigned char has_showIntermediateStateTapBehaviorListView : 1; unsigned char read_unknownFields : 1; unsigned char read_completion : 1; unsigned char read_resultRefinements : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasCompletion;
@property (retain, nonatomic) NSString *completion;
@property (nonatomic) char hasTapBehavior;
@property (nonatomic) int tapBehavior;
@property (nonatomic) char hasShowIntermediateStateTapBehaviorListView;
@property (nonatomic) char showIntermediateStateTapBehaviorListView;
@property (retain, nonatomic) NSMutableArray *resultRefinements;
@property (readonly, nonatomic) char hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic) char hasQueryHasAttributeIntentsInRefinements;
@property (nonatomic) char queryHasAttributeIntentsInRefinements;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)resultRefinementType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTapBehavior:(id)a0;
- (void)addResultRefinement:(id)a0;
- (void)clearResultRefinements;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)resultRefinementAtIndex:(unsigned long long)a0;
- (unsigned long long)resultRefinementsCount;
- (id)tapBehaviorAsString:(int)a0;

@end
