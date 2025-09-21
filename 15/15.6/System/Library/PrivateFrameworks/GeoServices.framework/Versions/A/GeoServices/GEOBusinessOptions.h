@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOBusinessOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributeKeys;
    NSMutableArray *_photoOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _maxBusinessResults;
    char _includeBusinessHours;
    char _includeCenter;
    struct { unsigned char has_maxBusinessResults : 1; unsigned char has_includeBusinessHours : 1; unsigned char has_includeCenter : 1; unsigned char read_unknownFields : 1; unsigned char read_attributeKeys : 1; unsigned char read_photoOptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *photoOptions;
@property (retain, nonatomic) NSMutableArray *attributeKeys;
@property (nonatomic) char hasIncludeBusinessHours;
@property (nonatomic) char includeBusinessHours;
@property (nonatomic) char hasMaxBusinessResults;
@property (nonatomic) int maxBusinessResults;
@property (nonatomic) char hasIncludeCenter;
@property (nonatomic) char includeCenter;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)attributeKeyType;
+ (char)isValid:(id)a0;
+ (Class)photoOptionsType;

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
- (void)addAttributeKey:(id)a0;
- (void)addPhotoOptions:(id)a0;
- (id)attributeKeyAtIndex:(unsigned long long)a0;
- (unsigned long long)attributeKeysCount;
- (void)clearAttributeKeys;
- (void)clearPhotoOptions;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)photoOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)photoOptionsCount;
- (void)readAll:(char)a0;

@end
