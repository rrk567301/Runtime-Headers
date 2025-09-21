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

@property (readonly, nonatomic) char hasTitleString;
@property (retain, nonatomic) GEOFormattedString *titleString;
@property (readonly, nonatomic) char hasSubTitleString;
@property (retain, nonatomic) GEOFormattedString *subTitleString;
@property (readonly, nonatomic) char hasEffectiveTimeRange;
@property (retain, nonatomic) GEOFormattedString *effectiveTimeRange;
@property (retain, nonatomic) NSMutableArray *restrictionDetails;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)restrictionDetailsType;

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
- (void)addRestrictionDetails:(id)a0;
- (void)clearRestrictionDetails;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)restrictionDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)restrictionDetailsCount;

@end
