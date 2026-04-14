@class NSString, KVItem, KVPriorInfo;

@interface KVItemInfo : NSObject <NSCopying> {
    KVItem *_item;
    NSString *_originAppId;
    KVPriorInfo *_priorInfo;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)item;
- (long long)itemType;
- (id)itemId;
- (id)unindexedFieldsWithType:(long long)a0;
- (id)originAppId;
- (id)priorInfo;
- (id)initWithItem:(id)a0 originAppId:(id)a1;
- (id)initWithItem:(id)a0 originAppId:(id)a1 priorInfo:(id)a2;
- (id)unindexedFields;
- (void)setPriorInfo:(id)a0;
- (BOOL)isEqualToItemInfo:(id)a0;

@end
