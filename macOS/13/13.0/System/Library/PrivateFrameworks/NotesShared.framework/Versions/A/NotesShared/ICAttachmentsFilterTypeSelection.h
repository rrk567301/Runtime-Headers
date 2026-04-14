@interface ICAttachmentsFilterTypeSelection : ICFilterTypeSelection

@property (nonatomic) unsigned long long selectionType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)filterName;
- (id)rawFilterValue;
- (id)initWithSelectionType:(unsigned long long)a0;
- (id)initWithAttachmentSection:(short)a0;
- (BOOL)isEqualToICAttachmentsFilterTypeSelection:(id)a0;

@end
