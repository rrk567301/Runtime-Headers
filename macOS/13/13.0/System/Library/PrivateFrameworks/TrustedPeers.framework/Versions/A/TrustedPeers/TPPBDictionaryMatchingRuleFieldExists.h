@class NSString;

@interface TPPBDictionaryMatchingRuleFieldExists : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NSString *fieldName;

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
- (BOOL)matches:(id)a0 error:(id *)a1;

@end
