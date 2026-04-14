@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORegionalResourceTileData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributions;
    NSMutableArray *_filenames;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_attributions : 1; unsigned char read_filenames : 1; unsigned char read_icons : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *filenames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)attributionType;
+ (Class)filenameType;
+ (Class)iconType;

- (void)addIcon:(id)a0;
- (void)clearAttributions;
- (id)iconAtIndex:(unsigned long long)a0;
- (unsigned long long)iconsCount;
- (unsigned long long)attributionsCount;
- (void)clearIcons;
- (id)attributionAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)filenameAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithData:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearFilenames;
- (BOOL)isEqual:(id)a0;
- (void)addAttribution:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addFilename:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)filenamesCount;
- (id)initWithJSON:(id)a0;

@end
