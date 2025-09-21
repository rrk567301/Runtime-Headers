@class NSString, NSMutableArray, PBDataReader;

@interface GEOSubactionMetaData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _subactions;
    NSMutableArray *_childItemSubactionTypes;
    NSString *_displayedString;
    NSMutableArray *_displayedTexts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _selectedSubactionIndex;
    int _subactionType;
    struct { unsigned char has_selectedSubactionIndex : 1; unsigned char has_subactionType : 1; unsigned char read_subactions : 1; unsigned char read_childItemSubactionTypes : 1; unsigned char read_displayedString : 1; unsigned char read_displayedTexts : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasSelectedSubactionIndex;
@property (nonatomic) int selectedSubactionIndex;
@property (nonatomic) char hasSubactionType;
@property (nonatomic) int subactionType;
@property (readonly, nonatomic) char hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;
@property (readonly, nonatomic) unsigned long long subactionsCount;
@property (readonly, nonatomic) int *subactions;
@property (retain, nonatomic) NSMutableArray *displayedTexts;
@property (retain, nonatomic) NSMutableArray *childItemSubactionTypes;

+ (Class)childItemSubactionTypeType;
+ (Class)displayedTextType;
+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (int)StringAsSubactions:(id)a0;
- (void)clearSubactions;
- (int)StringAsSubactionType:(id)a0;
- (void)addChildItemSubactionType:(id)a0;
- (void)addDisplayedText:(id)a0;
- (void)addSubaction:(int)a0;
- (id)childItemSubactionTypeAtIndex:(unsigned long long)a0;
- (unsigned long long)childItemSubactionTypesCount;
- (void)clearChildItemSubactionTypes;
- (void)clearDisplayedTexts;
- (id)displayedTextAtIndex:(unsigned long long)a0;
- (unsigned long long)displayedTextsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setSubactions:(int *)a0 count:(unsigned long long)a1;
- (int)subactionAtIndex:(unsigned long long)a0;
- (id)subactionTypeAsString:(int)a0;
- (id)subactionsAsString:(int)a0;

@end
