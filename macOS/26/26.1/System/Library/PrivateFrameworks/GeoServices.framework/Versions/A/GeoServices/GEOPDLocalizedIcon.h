@class NSString, PBUnknownFields;

@interface GEOPDLocalizedIcon : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    unsigned int _accoladeIconId;
    struct { unsigned char has_accoladeIconId : 1; } _flags;
}

+ (id)bestLocalizedIcon:(id)a0 forPreferredLanguages:(id)a1 fallbackToFirstAvailable:(BOOL)a2;
+ (id)bestLocalizedIconForCurrentLocale:(id)a0 fallbackToFirstAvailable:(BOOL)a1;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
