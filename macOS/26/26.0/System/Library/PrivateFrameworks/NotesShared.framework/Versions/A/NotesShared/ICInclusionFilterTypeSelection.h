@interface ICInclusionFilterTypeSelection : ICFilterTypeSelection <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) unsigned long long inclusionType;

- (long long)filterType;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithInclusionType:(unsigned long long)a0;
- (BOOL)isEqualToInclusionFilterSelection:(id)a0;
- (id)rawFilterValue;

@end
