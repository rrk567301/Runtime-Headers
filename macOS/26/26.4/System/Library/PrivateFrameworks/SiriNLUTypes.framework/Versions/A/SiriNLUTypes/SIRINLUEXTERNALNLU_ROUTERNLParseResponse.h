@class NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERNLParseResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *userParses;

+ (Class)userParsesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearUserParses;
- (unsigned long long)userParsesCount;
- (void)addUserParses:(id)a0;
- (id)userParsesAtIndex:(unsigned long long)a0;

@end
