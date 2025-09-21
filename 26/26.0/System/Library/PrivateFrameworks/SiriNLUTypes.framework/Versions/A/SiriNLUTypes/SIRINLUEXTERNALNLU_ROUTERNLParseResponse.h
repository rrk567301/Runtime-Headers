@class NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERNLParseResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *userParses;

+ (Class)userParsesType;

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
- (unsigned long long)userParsesCount;
- (void)clearUserParses;
- (void)addUserParses:(id)a0;
- (id)userParsesAtIndex:(unsigned long long)a0;

@end
