@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOSuggestionEntryList : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_localizedSectionHeader;
    NSMutableArray *_suggestionEntries;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _contentType;
    char _showSectionHeader;
    struct { unsigned char has_contentType : 1; unsigned char has_showSectionHeader : 1; unsigned char read_unknownFields : 1; unsigned char read_localizedSectionHeader : 1; unsigned char read_suggestionEntries : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
