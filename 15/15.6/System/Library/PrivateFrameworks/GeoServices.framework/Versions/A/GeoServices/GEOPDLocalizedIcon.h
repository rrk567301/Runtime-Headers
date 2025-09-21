@class NSString, PBUnknownFields;

@interface GEOPDLocalizedIcon : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    unsigned int _accoladeIconId;
    struct { unsigned char has_accoladeIconId : 1; } _flags;
}

+ (id)bestLocalizedIcon:(id)a0 forPreferredLanguages:(id)a1 fallbackToFirstAvailable:(char)a2;
+ (id)bestLocalizedIconForCurrentLocale:(id)a0 fallbackToFirstAvailable:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
