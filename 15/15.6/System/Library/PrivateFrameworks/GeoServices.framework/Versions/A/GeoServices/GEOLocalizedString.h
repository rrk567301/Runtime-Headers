@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLocalizedString : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    NSString *_stringValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_locale : 1; unsigned char read_stringValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)bestLocalizedString:(id)a0 forPreferredLanguages:(id)a1 fallbackToFirstAvailable:(char)a2;
+ (id)bestLocalizedStringForCurrentLocale:(id)a0 fallbackToFirstAvailable:(char)a1;
+ (id)bestString:(id)a0 forPreferredLanguages:(id)a1 fallbackToFirstAvailable:(char)a2;
+ (id)bestStringForCurrentLocale:(id)a0 fallbackToFirstAvailable:(char)a1;
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
