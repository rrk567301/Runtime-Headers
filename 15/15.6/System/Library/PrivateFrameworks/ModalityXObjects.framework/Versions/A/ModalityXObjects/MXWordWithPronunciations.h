@class NSString, NSMutableArray;

@interface MXWordWithPronunciations : PBCodable <NSCopying> {
    struct { unsigned char frequency : 1; } _has;
}

@property (readonly, nonatomic) char hasOrthography;
@property (retain, nonatomic) NSString *orthography;
@property (retain, nonatomic) NSMutableArray *pronunciations;
@property (nonatomic) char hasFrequency;
@property (nonatomic) int frequency;
@property (readonly, nonatomic) char hasTag;
@property (retain, nonatomic) NSString *tag;

+ (Class)pronunciationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPronunciations:(id)a0;
- (void)clearPronunciations;
- (id)pronunciationsAtIndex:(unsigned long long)a0;
- (unsigned long long)pronunciationsCount;

@end
