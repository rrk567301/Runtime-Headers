@class GEOPBTransitIcon, NSString, PBDataReader, GEOPBTransitShield, GEOSFSymbol, PBUnknownFields;
@protocol GEOTransitTextDataSource, GEOTransitShieldDataSource, GEOTransitIconDataSource;

@interface GEOPBTransitArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityString;
    GEOPBTransitShield *_iconFallbackShield;
    GEOPBTransitIcon *_icon;
    GEOSFSymbol *_sfSymbol;
    GEOPBTransitShield *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _artworkType;
    int _artworkUse;
    int _badge;
    struct { unsigned char has_artworkType : 1; unsigned char has_artworkUse : 1; unsigned char has_badge : 1; unsigned char read_unknownFields : 1; unsigned char read_accessibilityString : 1; unsigned char read_iconFallbackShield : 1; unsigned char read_icon : 1; unsigned char read_sfSymbol : 1; unsigned char read_shield : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) int artworkSourceType;
@property (readonly, nonatomic) int artworkUseType;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (readonly, nonatomic) id<GEOTransitTextDataSource> textDataSource;
@property (readonly, nonatomic) char hasRoutingIncidentBadge;
@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasArtworkType;
@property (nonatomic) int artworkType;
@property (nonatomic) char hasArtworkUse;
@property (nonatomic) int artworkUse;
@property (readonly, nonatomic) char hasShield;
@property (retain, nonatomic) GEOPBTransitShield *shield;
@property (readonly, nonatomic) char hasIcon;
@property (retain, nonatomic) GEOPBTransitIcon *icon;
@property (readonly, nonatomic) char hasIconFallbackShield;
@property (retain, nonatomic) GEOPBTransitShield *iconFallbackShield;
@property (nonatomic) char hasBadge;
@property (nonatomic) int badge;
@property (readonly, nonatomic) char hasAccessibilityString;
@property (retain, nonatomic) NSString *accessibilityString;
@property (readonly, nonatomic) char hasSfSymbol;
@property (retain, nonatomic) GEOSFSymbol *sfSymbol;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (int)StringAsArtworkType:(id)a0;
- (int)StringAsArtworkUse:(id)a0;
- (int)StringAsBadge:(id)a0;
- (id)artworkTypeAsString:(int)a0;
- (id)artworkUseAsString:(int)a0;
- (id)badgeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
