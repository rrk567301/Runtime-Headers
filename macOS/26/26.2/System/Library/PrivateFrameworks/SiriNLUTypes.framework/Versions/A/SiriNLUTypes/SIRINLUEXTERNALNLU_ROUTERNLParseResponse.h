@class NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERNLParseResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *userParses;

+ (Class)userParsesType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)userParsesCount;
- (void)clearUserParses;
- (void)addUserParses:(id)a0;
- (id)userParsesAtIndex:(unsigned long long)a0;

@end
