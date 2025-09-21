@class NSData, NSMutableArray, PBDataReader;

@interface GEOMapsServerMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_mapsSearchResults;
    NSMutableArray *_suggestionEntryMetadataDisplayeds;
    NSData *_suggestionEntryMetadataTappedOn;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_mapsSearchResults : 1; unsigned char read_suggestionEntryMetadataDisplayeds : 1; unsigned char read_suggestionEntryMetadataTappedOn : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasSuggestionEntryMetadataTappedOn;
@property (retain, nonatomic) NSData *suggestionEntryMetadataTappedOn;
@property (retain, nonatomic) NSMutableArray *suggestionEntryMetadataDisplayeds;
@property (retain, nonatomic) NSMutableArray *mapsSearchResults;

+ (char)isValid:(id)a0;
+ (Class)mapsSearchResultType;
+ (Class)suggestionEntryMetadataDisplayedType;

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
- (void)addMapsSearchResult:(id)a0;
- (void)addSuggestionEntryMetadataDisplayed:(id)a0;
- (void)clearMapsSearchResults;
- (void)clearSuggestionEntryMetadataDisplayeds;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapsSearchResultAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsSearchResultsCount;
- (void)readAll:(char)a0;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionEntryMetadataDisplayedsCount;

@end
