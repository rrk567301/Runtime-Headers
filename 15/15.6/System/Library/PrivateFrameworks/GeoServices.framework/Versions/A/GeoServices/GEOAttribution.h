@class PBDataReader, NSString, NSData, NSMutableArray, PBUnknownFields;

@interface GEOAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSString *_badgeChecksum;
    NSString *_badge;
    NSString *_logoChecksum;
    NSString *_logo;
    NSString *_name;
    NSData *_plainTextURLSHA256Checksum;
    NSString *_plainTextURL;
    NSMutableArray *_resources;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _dataSet;
    unsigned int _linkDisplayStringIndex;
    struct { unsigned char has_dataSet : 1; unsigned char has_linkDisplayStringIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_regions : 1; unsigned char read_badgeChecksum : 1; unsigned char read_badge : 1; unsigned char read_logoChecksum : 1; unsigned char read_logo : 1; unsigned char read_name : 1; unsigned char read_plainTextURLSHA256Checksum : 1; unsigned char read_plainTextURL : 1; unsigned char read_resources : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasBadge;
@property (retain, nonatomic) NSString *badge;
@property (readonly, nonatomic) char hasLogo;
@property (retain, nonatomic) NSString *logo;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) char hasBadgeChecksum;
@property (retain, nonatomic) NSString *badgeChecksum;
@property (readonly, nonatomic) char hasLogoChecksum;
@property (retain, nonatomic) NSString *logoChecksum;
@property (retain, nonatomic) NSMutableArray *resources;
@property (readonly, nonatomic) unsigned long long regionsCount;
@property (readonly, nonatomic) struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *regions;
@property (nonatomic) char hasDataSet;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic) char hasLinkDisplayStringIndex;
@property (nonatomic) unsigned int linkDisplayStringIndex;
@property (readonly, nonatomic) char hasPlainTextURL;
@property (retain, nonatomic) NSString *plainTextURL;
@property (readonly, nonatomic) char hasPlainTextURLSHA256Checksum;
@property (retain, nonatomic) NSData *plainTextURLSHA256Checksum;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)resourceType;
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
- (void)addRegion:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })a0;
- (void)clearResources;
- (void)addResource:(id)a0;
- (void)clearRegions;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })regionAtIndex:(unsigned long long)a0;
- (id)resourceAtIndex:(unsigned long long)a0;
- (unsigned long long)resourcesCount;
- (void)setRegions:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 count:(unsigned long long)a1;

@end
