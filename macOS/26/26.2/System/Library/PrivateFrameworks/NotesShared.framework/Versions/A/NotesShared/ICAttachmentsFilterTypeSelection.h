@interface ICAttachmentsFilterTypeSelection : ICFilterTypeSelection

@property (nonatomic) unsigned long long selectionType;

- (long long)filterType;
- (id)filterName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithAttachmentSection:(short)a0;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICAttachmentsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
