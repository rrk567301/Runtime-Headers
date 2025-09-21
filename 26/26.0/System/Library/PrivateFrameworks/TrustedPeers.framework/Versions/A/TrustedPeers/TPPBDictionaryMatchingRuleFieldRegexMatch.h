@class NSString;

@interface TPPBDictionaryMatchingRuleFieldRegexMatch : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) BOOL hasRegex;
@property (retain, nonatomic) NSString *regex;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)matches:(id)a0 error:(id *)a1;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
