@class PBDataReader, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEORestrictionInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_effectiveTimeRange;
    NSMutableArray *_restrictionDetails;
    GEOFormattedString *_subTitleString;
    GEOFormattedString *_titleString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_effectiveTimeRange : 1; unsigned char read_restrictionDetails : 1; unsigned char read_subTitleString : 1; unsigned char read_titleString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTitleString;
@property (retain, nonatomic) GEOFormattedString *titleString;
@property (readonly, nonatomic) BOOL hasSubTitleString;
@property (retain, nonatomic) GEOFormattedString *subTitleString;
@property (readonly, nonatomic) BOOL hasEffectiveTimeRange;
@property (retain, nonatomic) GEOFormattedString *effectiveTimeRange;
@property (retain, nonatomic) NSMutableArray *restrictionDetails;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)restrictionDetailsType;

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
- (void)clearRestrictionDetails;
- (void)addRestrictionDetails:(id)a0;
- (unsigned long long)restrictionDetailsCount;
- (id)restrictionDetailsAtIndex:(unsigned long long)a0;

@end
