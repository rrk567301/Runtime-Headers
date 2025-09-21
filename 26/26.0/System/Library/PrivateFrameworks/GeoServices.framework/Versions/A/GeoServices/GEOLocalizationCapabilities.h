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

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (int)supportedPhoneticTypeAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)setSupportedPhoneticTypes:(int *)a0 count:(unsigned long long)a1;
- (void)addSupportedPhoneticType:(int)a0;
- (void)mergeFrom:(id)a0;
- (id)supportedPhoneticTypesAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsSupportedPhoneticTypes:(id)a0;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearSupportedPhoneticTypes;
- (void).cxx_destruct;

@end
