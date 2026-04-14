@class NSString;

@interface TPPBPolicyModelToCategory : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPrefix;
@property (retain, nonatomic) NSString *prefix;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;

+ (id)TPPBPolicyModelToCategoryWithPrefix:(id)a0 category:(id)a1;

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

@end
