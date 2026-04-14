@interface ICInclusionFilterTypeSelection : ICFilterTypeSelection <NSCopying>

@property (readonly, nonatomic) unsigned long long inclusionType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)rawFilterValue;
- (id)initWithInclusionType:(unsigned long long)a0;
- (BOOL)isEqualToInclusionFilterSelection:(id)a0;

@end
