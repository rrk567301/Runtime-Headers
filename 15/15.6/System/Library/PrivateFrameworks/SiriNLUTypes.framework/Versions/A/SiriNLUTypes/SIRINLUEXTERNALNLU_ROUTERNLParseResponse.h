@class NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERNLParseResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *userParses;

+ (Class)userParsesType;

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
- (unsigned long long)userParsesCount;
- (void)clearUserParses;
- (void)addUserParses:(id)a0;
- (id)userParsesAtIndex:(unsigned long long)a0;

@end
