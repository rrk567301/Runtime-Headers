@class PBUnknownFields;

@interface GEOLocalizationCapabilities : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedPhoneticTypes;
    BOOL _supportsLocalizedTrafficControlIcons;
    struct { unsigned char has_supportsLocalizedTrafficControlIcons : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long supportedPhoneticTypesCount;
@property (readonly, nonatomic) int *supportedPhoneticTypes;
@property (nonatomic) BOOL hasSupportsLocalizedTrafficControlIcons;
@property (nonatomic) BOOL supportsLocalizedTrafficControlIcons;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (int)supportedPhoneticTypeAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearSupportedPhoneticTypes;
- (id)supportedPhoneticTypesAsString:(int)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)setSupportedPhoneticTypes:(int *)a0 count:(unsigned long long)a1;
- (void)addSupportedPhoneticType:(int)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsSupportedPhoneticTypes:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (void)dealloc;
- (id)initWithJSON:(id)a0;

@end
