@class PBDataReader, GEOPublisherDetails, GEOCollectionDetails, PBUnknownFields;

@interface GEOLogMsgStateCuratedCollection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _impossibleActions;
    struct { int *list; unsigned long long count; unsigned long long size; } _possibleActions;
    GEOCollectionDetails *_collectionDetails;
    GEOPublisherDetails *_publisherDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _horizontalIndex;
    int _localSearchProviderID;
    int _placecardType;
    int _repeatableSectionIndex;
    unsigned int _verticalIndex;
    struct { unsigned char has_horizontalIndex : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_placecardType : 1; unsigned char has_repeatableSectionIndex : 1; unsigned char has_verticalIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_impossibleActions : 1; unsigned char read_possibleActions : 1; unsigned char read_collectionDetails : 1; unsigned char read_publisherDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasPublisherDetails;
@property (retain, nonatomic) GEOPublisherDetails *publisherDetails;
@property (readonly, nonatomic) char hasCollectionDetails;
@property (retain, nonatomic) GEOCollectionDetails *collectionDetails;
@property (nonatomic) char hasPlacecardType;
@property (nonatomic) int placecardType;
@property (readonly, nonatomic) unsigned long long possibleActionsCount;
@property (readonly, nonatomic) int *possibleActions;
@property (readonly, nonatomic) unsigned long long impossibleActionsCount;
@property (readonly, nonatomic) int *impossibleActions;
@property (nonatomic) char hasVerticalIndex;
@property (nonatomic) unsigned int verticalIndex;
@property (nonatomic) char hasHorizontalIndex;
@property (nonatomic) unsigned int horizontalIndex;
@property (nonatomic) char hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) char hasRepeatableSectionIndex;
@property (nonatomic) int repeatableSectionIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (int)StringAsPlacecardType:(id)a0;
- (int)StringAsPossibleActions:(id)a0;
- (int)StringAsImpossibleActions:(id)a0;
- (void)addImpossibleAction:(int)a0;
- (void)addPossibleAction:(int)a0;
- (void)clearImpossibleActions;
- (void)clearPossibleActions;
- (void)clearUnknownFields:(char)a0;
- (int)impossibleActionAtIndex:(unsigned long long)a0;
- (id)impossibleActionsAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)placecardTypeAsString:(int)a0;
- (int)possibleActionAtIndex:(unsigned long long)a0;
- (id)possibleActionsAsString:(int)a0;
- (void)readAll:(char)a0;
- (void)setImpossibleActions:(int *)a0 count:(unsigned long long)a1;
- (void)setPossibleActions:(int *)a0 count:(unsigned long long)a1;

@end
