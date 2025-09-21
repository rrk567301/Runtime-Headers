@class NSMutableArray, PBUnknownFields;

@interface GEONameInfoList : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_nameInfos;
}

@property (retain, nonatomic) NSMutableArray *nameInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)nameInfoType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNameInfo:(id)a0;
- (void)clearNameInfos;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)nameInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)nameInfosCount;
- (void)readAll:(char)a0;

@end
