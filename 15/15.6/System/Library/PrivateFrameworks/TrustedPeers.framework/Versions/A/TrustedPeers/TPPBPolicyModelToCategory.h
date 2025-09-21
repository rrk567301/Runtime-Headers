@class NSString;

@interface TPPBPolicyModelToCategory : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPrefix;
@property (retain, nonatomic) NSString *prefix;
@property (readonly, nonatomic) char hasCategory;
@property (retain, nonatomic) NSString *category;

+ (id)TPPBPolicyModelToCategoryWithPrefix:(id)a0 category:(id)a1;

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
