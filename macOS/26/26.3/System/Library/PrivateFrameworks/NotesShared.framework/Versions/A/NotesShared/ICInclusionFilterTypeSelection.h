@interface ICInclusionFilterTypeSelection : ICFilterTypeSelection <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) unsigned long long inclusionType;

- (id)debugDescription;
- (long long)filterType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithInclusionType:(unsigned long long)a0;
- (BOOL)isEqualToInclusionFilterSelection:(id)a0;
- (id)rawFilterValue;

@end
