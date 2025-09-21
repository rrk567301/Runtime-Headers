@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAccoladeValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_accoladeTexts;
    NSMutableArray *_localizedIcons;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _suppressAccoladeText;
    struct { unsigned char has_suppressAccoladeText : 1; unsigned char read_unknownFields : 1; unsigned char read_accoladeTexts : 1; unsigned char read_localizedIcons : 1; unsigned char read_vendorId : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)displayText;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)displayIconId;

@end
