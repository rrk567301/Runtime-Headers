@interface ICAttachmentsFilterTypeSelection : ICFilterTypeSelection

@property (nonatomic) unsigned long long selectionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (long long)filterType;
- (id)filterName;
- (id)initWithAttachmentSection:(short)a0;
- (id)initWithSelectionType:(unsigned long long)a0;
- (char)isEqualToICAttachmentsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
