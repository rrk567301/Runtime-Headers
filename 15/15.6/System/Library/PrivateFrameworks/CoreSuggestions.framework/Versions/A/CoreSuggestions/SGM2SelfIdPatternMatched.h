@class NSString;

@interface SGM2SelfIdPatternMatched : PBCodable <NSCopying> {
    struct { unsigned char messageIndex : 1; unsigned char nameClass : 1; unsigned char nameTokens : 1; unsigned char patternType : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasPatternType;
@property (nonatomic) int patternType;
@property (readonly, nonatomic) char hasPatternHash;
@property (retain, nonatomic) NSString *patternHash;
@property (nonatomic) char hasNameTokens;
@property (nonatomic) unsigned int nameTokens;
@property (nonatomic) char hasNameClass;
@property (nonatomic) int nameClass;
@property (nonatomic) char hasMessageIndex;
@property (nonatomic) unsigned int messageIndex;

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
- (int)StringAsPatternType:(id)a0;
- (int)StringAsNameClass:(id)a0;
- (id)nameClassAsString:(int)a0;
- (id)patternTypeAsString:(int)a0;

@end
