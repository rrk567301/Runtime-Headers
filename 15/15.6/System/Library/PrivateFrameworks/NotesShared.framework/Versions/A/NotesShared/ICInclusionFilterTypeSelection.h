@interface ICInclusionFilterTypeSelection : ICFilterTypeSelection <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) unsigned long long inclusionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (long long)filterType;
- (id)initWithInclusionType:(unsigned long long)a0;
- (char)isEqualToInclusionFilterSelection:(id)a0;
- (id)rawFilterValue;

@end
