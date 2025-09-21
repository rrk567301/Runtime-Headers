@interface SEMCascadeItemTypeFilter : NSObject <SEMEntityFilter>

@property (readonly, nonatomic) unsigned short itemType;

+ (id)filterFromKVItemTypeNumber:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (unsigned char)entityType;
- (id)initWithItemType:(unsigned short)a0 error:(id *)a1;
- (char)isEqualToCascadeItemTypeFilter:(id)a0;

@end
