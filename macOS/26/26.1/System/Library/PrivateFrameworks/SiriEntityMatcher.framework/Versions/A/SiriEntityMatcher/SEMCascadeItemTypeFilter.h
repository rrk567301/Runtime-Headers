@interface SEMCascadeItemTypeFilter : NSObject <SEMEntityFilter>

@property (readonly, nonatomic) unsigned short itemType;

+ (id)filterFromKVItemTypeNumber:(id)a0;

- (unsigned char)entityType;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithItemType:(unsigned short)a0 error:(id *)a1;
- (BOOL)isEqualToCascadeItemTypeFilter:(id)a0;

@end
