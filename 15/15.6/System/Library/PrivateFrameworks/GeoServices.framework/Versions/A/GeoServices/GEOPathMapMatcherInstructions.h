@class NSMutableArray, PBUnknownFields;

@interface GEOPathMapMatcherInstructions : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_noMatchs;
}

@property (retain, nonatomic) NSMutableArray *noMatchs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)noMatchType;

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
- (id)noMatchAtIndex:(unsigned long long)a0;
- (void)addNoMatch:(id)a0;
- (void)clearNoMatchs;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)noMatchsCount;
- (void)readAll:(char)a0;

@end
