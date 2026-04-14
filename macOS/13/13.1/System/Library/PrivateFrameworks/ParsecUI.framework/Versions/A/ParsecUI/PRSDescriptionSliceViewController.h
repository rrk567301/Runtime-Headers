@class NSString, PRSDescriptionCardSection;

@interface PRSDescriptionSliceViewController : PRSCardSectionSliceViewController <NSTextViewDelegate>

@property (retain, nonatomic) PRSDescriptionCardSection *descriptionCardSection;
@property BOOL isGeneric;
@property BOOL descriptionExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)height;
- (void)awakeFromNib;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (id)textView:(id)a0 willDisplayToolTip:(id)a1 forCharacterAtIndex:(unsigned long long)a2;
- (id)titleTextField;
- (id)descriptionTextView;
- (void)setGeneric:(BOOL)a0;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (void)syncAttributes;
- (id)initWithDescriptionCardSection:(id)a0;
- (id)descriptionSliceView;
- (id)descriptionTextViewMinHeightConstraint;

@end
