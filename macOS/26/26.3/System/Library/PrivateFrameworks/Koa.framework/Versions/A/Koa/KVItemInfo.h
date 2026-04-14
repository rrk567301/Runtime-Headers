@class SEMCascadeEntityInfo;

@interface KVItemInfo : NSObject <NSCopying>

@property (readonly, nonatomic) SEMCascadeEntityInfo *entityInfo;

- (id)item;
- (id)description;
- (long long)itemType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)itemId;
- (id)originAppId;
- (id)priorInfo;
- (id)unindexedFields;
- (id)initWithCascadeEntityInfo:(id)a0;
- (BOOL)isEqualToItemInfo:(id)a0;
- (id)unindexedFieldsWithType:(long long)a0;

@end
