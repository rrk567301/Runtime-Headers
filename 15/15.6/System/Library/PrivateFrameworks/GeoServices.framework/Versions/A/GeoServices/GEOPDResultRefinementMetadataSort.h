@class NSString, PBUnknownFields;

@interface GEOPDResultRefinementMetadataSort : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_customSortFunctionIdentifier;
    unsigned int _selectionFromQuerySequenceNumber;
    unsigned int _serverOverriddenPosition;
    int _sortType;
    char _enableServerOverriddenPositioning;
    char _selectionFromQuery;
    struct { unsigned char has_selectionFromQuerySequenceNumber : 1; unsigned char has_serverOverriddenPosition : 1; unsigned char has_sortType : 1; unsigned char has_enableServerOverriddenPositioning : 1; unsigned char has_selectionFromQuery : 1; } _flags;
}

@property (nonatomic) char hasSortType;
@property (nonatomic) int sortType;
@property (readonly, nonatomic) char hasCustomSortFunctionIdentifier;
@property (retain, nonatomic) NSString *customSortFunctionIdentifier;
@property (nonatomic) char hasSelectionFromQuerySequenceNumber;
@property (nonatomic) unsigned int selectionFromQuerySequenceNumber;
@property (nonatomic) char hasSelectionFromQuery;
@property (nonatomic) char selectionFromQuery;
@property (nonatomic) char hasServerOverriddenPosition;
@property (nonatomic) unsigned int serverOverriddenPosition;
@property (nonatomic) char hasEnableServerOverriddenPositioning;
@property (nonatomic) char enableServerOverriddenPositioning;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSortType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)sortTypeAsString:(int)a0;

@end
