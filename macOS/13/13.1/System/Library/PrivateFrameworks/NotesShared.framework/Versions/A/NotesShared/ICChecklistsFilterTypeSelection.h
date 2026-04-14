@interface ICChecklistsFilterTypeSelection : ICFilterTypeSelection <NSCopying>

@property (readonly, nonatomic) unsigned long long selectionType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)filterName;
- (id)rawFilterValue;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICChecklistsFilterTypeSelection:(id)a0;

@end
