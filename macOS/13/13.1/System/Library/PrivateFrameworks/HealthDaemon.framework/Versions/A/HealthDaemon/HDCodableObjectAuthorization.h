@class NSData, NSMutableArray;

@interface HDCodableObjectAuthorization : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasObjectUUID;
@property (retain, nonatomic) NSData *objectUUID;
@property (retain, nonatomic) NSMutableArray *authorizations;

+ (Class)authorizationsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAuthorizations;
- (void)addAuthorizations:(id)a0;
- (unsigned long long)authorizationsCount;
- (id)authorizationsAtIndex:(unsigned long long)a0;

@end
