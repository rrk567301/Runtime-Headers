@interface ICAttachmentsFilterTypeSelection : ICFilterTypeSelection

@property (nonatomic) unsigned long long selectionType;

- (id)debugDescription;
- (long long)filterType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)filterName;
- (id)initWithAttachmentSection:(short)a0;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICAttachmentsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
