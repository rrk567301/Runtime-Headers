@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_listResultItems;
    NSString *_searchString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _listType;
    struct { unsigned char has_listType : 1; unsigned char read_listResultItems : 1; unsigned char read_searchString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasListType;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSMutableArray *listResultItems;
@property (readonly, nonatomic) char hasSearchString;
@property (retain, nonatomic) NSString *searchString;

+ (char)isValid:(id)a0;
+ (Class)listResultItemType;

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
- (int)StringAsListType:(id)a0;
- (void)addListResultItem:(id)a0;
- (void)clearListResultItems;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)listResultItemAtIndex:(unsigned long long)a0;
- (unsigned long long)listResultItemsCount;
- (id)listTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
