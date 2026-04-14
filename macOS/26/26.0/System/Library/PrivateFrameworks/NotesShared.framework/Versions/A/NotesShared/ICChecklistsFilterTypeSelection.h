@interface ICChecklistsFilterTypeSelection : ICFilterTypeSelection <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) unsigned long long selectionType;

- (long long)filterType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)filterName;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICChecklistsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
