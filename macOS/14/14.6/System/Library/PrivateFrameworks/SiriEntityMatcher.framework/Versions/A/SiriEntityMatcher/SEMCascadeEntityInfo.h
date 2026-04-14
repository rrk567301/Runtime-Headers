@class NSString, KVItem;

@interface SEMCascadeEntityInfo : NSObject <SEMEntityInfo> {
    KVItem *_item;
    NSString *_sourceIdentifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)sourceIdentifier;
- (unsigned char)entityType;
- (id)originAppId;
- (id)toKVItem:(id *)a0;
- (id)initWithItem:(id)a0 originAppId:(id)a1;
- (BOOL)isEqualToCascadeEntityInfo:(id)a0;

@end
