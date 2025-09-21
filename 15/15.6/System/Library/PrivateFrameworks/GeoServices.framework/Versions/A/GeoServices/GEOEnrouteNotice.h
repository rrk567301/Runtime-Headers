@class PBDataReader, NSString, GEORouteAnnotation, NSMutableArray, PBUnknownFields;

@interface GEOEnrouteNotice : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_guidances;
    NSString *_objectIdentifier;
    GEORouteAnnotation *_routeAnnotation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _groupItemHorizontalDisplayOrder;
    unsigned int _groupItemVerticalDisplayOrder;
    unsigned int _highlightDistance;
    unsigned int _objectGroupId;
    unsigned int _priority;
    int _type;
    unsigned int _zilchPathIndex;
    struct { unsigned char has_groupItemHorizontalDisplayOrder : 1; unsigned char has_groupItemVerticalDisplayOrder : 1; unsigned char has_highlightDistance : 1; unsigned char has_objectGroupId : 1; unsigned char has_priority : 1; unsigned char has_type : 1; unsigned char has_zilchPathIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_guidances : 1; unsigned char read_objectIdentifier : 1; unsigned char read_routeAnnotation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasObjectIdentifier;
@property (retain, nonatomic) NSString *objectIdentifier;
@property (retain, nonatomic) NSMutableArray *guidances;
@property (nonatomic) char hasHighlightDistance;
@property (nonatomic) unsigned int highlightDistance;
@property (nonatomic) char hasObjectGroupId;
@property (nonatomic) unsigned int objectGroupId;
@property (nonatomic) char hasPriority;
@property (nonatomic) unsigned int priority;
@property (readonly, nonatomic) char hasRouteAnnotation;
@property (retain, nonatomic) GEORouteAnnotation *routeAnnotation;
@property (nonatomic) char hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
@property (nonatomic) char hasGroupItemHorizontalDisplayOrder;
@property (nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property (nonatomic) char hasGroupItemVerticalDisplayOrder;
@property (nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)guidanceType;
+ (char)isValid:(id)a0;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)addGuidance:(id)a0;
- (void)clearGuidances;
- (void)clearUnknownFields:(char)a0;
- (id)guidanceAtIndex:(unsigned long long)a0;
- (unsigned long long)guidancesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
