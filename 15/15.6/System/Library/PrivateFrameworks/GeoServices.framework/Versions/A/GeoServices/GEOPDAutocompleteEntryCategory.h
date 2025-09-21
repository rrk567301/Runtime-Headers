@class PBUnknownFields, PBDataReader, GEOLocalizedString, NSData, GEOPDVenueIdentifier, GEOStyleAttributes;

@interface GEOPDAutocompleteEntryCategory : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_displayName;
    GEOStyleAttributes *_styleAttributes;
    NSData *_suggestionEntryMetadata;
    GEOPDVenueIdentifier *_venueIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_styleAttributes : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char read_venueIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) GEOLocalizedString *displayName;
@property (readonly, nonatomic) char hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) char hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (readonly, nonatomic) char hasVenueIdentifier;
@property (retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
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
