@class NSString, NSMutableArray;

@interface SIRINLUINTERNALToken : PBCodable <NSCopying> {
    struct { unsigned char begin : 1; unsigned char end : 1; unsigned char nonWhitespaceTokenIndex : 1; unsigned char tokenIndex : 1; unsigned char isSignificant : 1; unsigned char isWhitespace : 1; } _has;
}

@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) char hasBegin;
@property (nonatomic) int begin;
@property (nonatomic) char hasEnd;
@property (nonatomic) int end;
@property (nonatomic) char hasIsSignificant;
@property (nonatomic) char isSignificant;
@property (nonatomic) char hasIsWhitespace;
@property (nonatomic) char isWhitespace;
@property (retain, nonatomic) NSMutableArray *cleanValues;
@property (nonatomic) char hasTokenIndex;
@property (nonatomic) int tokenIndex;
@property (nonatomic) char hasNonWhitespaceTokenIndex;
@property (nonatomic) int nonWhitespaceTokenIndex;
@property (readonly, nonatomic) char hasCleanValue;
@property (retain, nonatomic) NSString *cleanValue;
@property (retain, nonatomic) NSMutableArray *normalizedValues;

+ (Class)cleanValuesType;
+ (Class)normalizedValuesType;

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
- (void)addNormalizedValues:(id)a0;
- (void)clearNormalizedValues;
- (id)normalizedValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)normalizedValuesCount;
- (void)addCleanValues:(id)a0;
- (id)cleanValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)cleanValuesCount;
- (void)clearCleanValues;

@end
