@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDActionData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_actionLinks;
    NSString *_actionSymbolImageName;
    NSMutableArray *_actionTitles;
    NSString *_categoryId;
    NSString *_winningAdamId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_actionLinks : 1; unsigned char read_actionSymbolImageName : 1; unsigned char read_actionTitles : 1; unsigned char read_categoryId : 1; unsigned char read_winningAdamId : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)actionName;
- (id)jsonRepresentation;

@end
