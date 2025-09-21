@class NSString, NSData, NSMutableArray, PBDataReader;

@interface GEOPDSearchCTRStoreKeyValuePair : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSData *_decompoundIndexes;
    NSString *_enTranslation;
    NSString *_geohash;
    NSString *_locale;
    NSString *_query;
    unsigned long long _singleId;
    NSMutableArray *_sortedIdTapsLists;
    NSMutableArray *_spellRewrites;
    NSMutableArray *_synonyms;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _numImpressions;
    int _numTapsAll;
    int _numTapsGeo;
    int _numTapsPoi;
    BOOL _isCompleteQuery;
    struct { unsigned char has_singleId : 1; unsigned char has_numImpressions : 1; unsigned char has_numTapsAll : 1; unsigned char has_numTapsGeo : 1; unsigned char has_numTapsPoi : 1; unsigned char has_isCompleteQuery : 1; unsigned char read_decompoundIndexes : 1; unsigned char read_enTranslation : 1; unsigned char read_geohash : 1; unsigned char read_locale : 1; unsigned char read_query : 1; unsigned char read_sortedIdTapsLists : 1; unsigned char read_spellRewrites : 1; unsigned char read_synonyms : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
