@class NSString, KVItem, KVPriorInfo;

@interface KVItemInfo : NSObject <NSCopying> {
    KVItem *_item;
    NSString *_originAppId;
    KVPriorInfo *_priorInfo;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)item;
- (long long)itemType;
- (id)itemId;
- (id)originAppId;
- (id)priorInfo;
- (id)unindexedFieldsWithType:(long long)a0;
- (id)unindexedFields;
- (id)initWithItem:(id)a0 originAppId:(id)a1;
- (id)initWithItem:(id)a0 originAppId:(id)a1 priorInfo:(id)a2;
- (BOOL)isEqualToItemInfo:(id)a0;
- (void)setPriorInfo:(id)a0;

@end
