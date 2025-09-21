@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLocalizedPublisherAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayName;
    NSString *_language;
    NSString *_subtitle;
    NSString *_themeColorDarkMode;
    NSString *_themeColorLightMode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _iconIdentifier;
    unsigned int _logoCenteredColorizedIdentifier;
    unsigned int _logoCenteredIdentifier;
    unsigned int _logoIdentifier;
    unsigned int _logoWithoutPaddingIdentifier;
    struct { unsigned char has_iconIdentifier : 1; unsigned char has_logoCenteredColorizedIdentifier : 1; unsigned char has_logoCenteredIdentifier : 1; unsigned char has_logoIdentifier : 1; unsigned char has_logoWithoutPaddingIdentifier : 1; unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_language : 1; unsigned char read_subtitle : 1; unsigned char read_themeColorDarkMode : 1; unsigned char read_themeColorLightMode : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) char hasIconIdentifier;
@property (nonatomic) unsigned int iconIdentifier;
@property (nonatomic) char hasLogoIdentifier;
@property (nonatomic) unsigned int logoIdentifier;
@property (nonatomic) char hasLogoCenteredIdentifier;
@property (nonatomic) unsigned int logoCenteredIdentifier;
@property (readonly, nonatomic) char hasThemeColorLightMode;
@property (retain, nonatomic) NSString *themeColorLightMode;
@property (readonly, nonatomic) char hasThemeColorDarkMode;
@property (retain, nonatomic) NSString *themeColorDarkMode;
@property (nonatomic) char hasLogoCenteredColorizedIdentifier;
@property (nonatomic) unsigned int logoCenteredColorizedIdentifier;
@property (nonatomic) char hasLogoWithoutPaddingIdentifier;
@property (nonatomic) unsigned int logoWithoutPaddingIdentifier;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
