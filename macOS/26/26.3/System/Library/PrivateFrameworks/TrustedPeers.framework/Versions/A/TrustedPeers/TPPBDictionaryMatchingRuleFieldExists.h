@class NSString;

@interface TPPBDictionaryMatchingRuleFieldExists : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NSString *fieldName;

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)matches:(id)a0 error:(id *)a1;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
