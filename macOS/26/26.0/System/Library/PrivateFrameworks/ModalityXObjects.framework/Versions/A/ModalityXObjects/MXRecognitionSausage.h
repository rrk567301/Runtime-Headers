@class NSMutableArray;

@interface MXRecognitionSausage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *positionalTokPhraseAlts;

+ (Class)positionalTokPhraseAltType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addPositionalTokPhraseAlt:(id)a0;
- (void)clearPositionalTokPhraseAlts;
- (id)positionalTokPhraseAltAtIndex:(unsigned long long)a0;
- (unsigned long long)positionalTokPhraseAltsCount;

@end
