@class NSString;

@interface ABCPbSigConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasSubtype;
@property (retain, nonatomic) NSString *subtype;
@property (readonly, nonatomic) char hasSubtypeContext;
@property (retain, nonatomic) NSString *subtypeContext;

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

@end
