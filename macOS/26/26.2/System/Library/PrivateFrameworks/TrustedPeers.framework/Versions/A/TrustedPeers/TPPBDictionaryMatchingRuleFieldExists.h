@class NSString;

@interface TPPBDictionaryMatchingRuleFieldExists : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NSString *fieldName;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)matches:(id)a0 error:(id *)a1;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
