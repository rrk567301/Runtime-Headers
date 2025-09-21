@class NSString, GEOPDStorefrontView, PBDataReader;

@interface GEOPDStorefrontPresentation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDStorefrontView *_closeUpView;
    NSString *_overlayImageUrl;
    GEOPDStorefrontView *_standOffView;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_closeUpView : 1; unsigned char read_overlayImageUrl : 1; unsigned char read_standOffView : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasCloseUpView;
@property (retain, nonatomic) GEOPDStorefrontView *closeUpView;
@property (readonly, nonatomic) char hasStandOffView;
@property (retain, nonatomic) GEOPDStorefrontView *standOffView;
@property (readonly, nonatomic) char hasOverlayImageUrl;
@property (retain, nonatomic) NSString *overlayImageUrl;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
