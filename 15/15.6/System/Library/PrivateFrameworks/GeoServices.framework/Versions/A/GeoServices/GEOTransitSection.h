@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOTransitSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _actionSheetArtworkIndexs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _routeDetailsArtworkIndexs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _stepIndexs;
    NSString *_actionSheetName;
    NSMutableArray *_ticketingSegments;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _nextOptionsIndex;
    char _disableAlightNotifications;
    struct { unsigned char has_nextOptionsIndex : 1; unsigned char has_disableAlightNotifications : 1; unsigned char read_unknownFields : 1; unsigned char read_actionSheetArtworkIndexs : 1; unsigned char read_routeDetailsArtworkIndexs : 1; unsigned char read_stepIndexs : 1; unsigned char read_actionSheetName : 1; unsigned char read_ticketingSegments : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long stepIndexsCount;
@property (readonly, nonatomic) unsigned int *stepIndexs;
@property (nonatomic) char hasNextOptionsIndex;
@property (nonatomic) int nextOptionsIndex;
@property (readonly, nonatomic) char hasActionSheetName;
@property (retain, nonatomic) NSString *actionSheetName;
@property (readonly, nonatomic) unsigned long long actionSheetArtworkIndexsCount;
@property (readonly, nonatomic) unsigned int *actionSheetArtworkIndexs;
@property (readonly, nonatomic) unsigned long long routeDetailsArtworkIndexsCount;
@property (readonly, nonatomic) unsigned int *routeDetailsArtworkIndexs;
@property (nonatomic) char hasDisableAlightNotifications;
@property (nonatomic) char disableAlightNotifications;
@property (retain, nonatomic) NSMutableArray *ticketingSegments;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)ticketingSegmentType;

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
- (void)clearStepIndexs;
- (unsigned int)actionSheetArtworkIndexAtIndex:(unsigned long long)a0;
- (void)addActionSheetArtworkIndex:(unsigned int)a0;
- (void)addRouteDetailsArtworkIndex:(unsigned int)a0;
- (void)addStepIndex:(unsigned int)a0;
- (void)addTicketingSegment:(id)a0;
- (void)clearActionSheetArtworkIndexs;
- (void)clearRouteDetailsArtworkIndexs;
- (void)clearTicketingSegments;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (unsigned int)routeDetailsArtworkIndexAtIndex:(unsigned long long)a0;
- (void)setActionSheetArtworkIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setRouteDetailsArtworkIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setStepIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)stepIndexAtIndex:(unsigned long long)a0;
- (id)ticketingSegmentAtIndex:(unsigned long long)a0;
- (unsigned long long)ticketingSegmentsCount;

@end
