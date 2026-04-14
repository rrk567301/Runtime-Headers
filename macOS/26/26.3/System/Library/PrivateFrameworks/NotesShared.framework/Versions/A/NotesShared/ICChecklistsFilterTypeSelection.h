@interface ICChecklistsFilterTypeSelection : ICFilterTypeSelection <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) unsigned long long selectionType;

- (id)filterName;
- (long long)filterType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICChecklistsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
