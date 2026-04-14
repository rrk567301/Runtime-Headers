@class SEMCascadeEntityInfo;

@interface KVItemInfo : NSObject <NSCopying>

@property (readonly, nonatomic) SEMCascadeEntityInfo *entityInfo;

- (id)item;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (long long)itemType;
- (id)itemId;
- (id)originAppId;
- (id)priorInfo;
- (id)unindexedFields;
- (id)initWithCascadeEntityInfo:(id)a0;
- (BOOL)isEqualToItemInfo:(id)a0;
- (id)unindexedFieldsWithType:(long long)a0;

@end
