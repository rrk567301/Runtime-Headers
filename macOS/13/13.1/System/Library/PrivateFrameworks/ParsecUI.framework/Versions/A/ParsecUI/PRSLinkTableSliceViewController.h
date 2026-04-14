@class PRSLinkTableCardSection, NSString;

@interface PRSLinkTableSliceViewController : PRSCardSectionSliceViewController <NSTextViewDelegate>

@property (retain, nonatomic) PRSLinkTableCardSection *linkTableCardSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)height;
- (void)awakeFromNib;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textView:(id)a0 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 toCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (id)textView:(id)a0 willDisplayToolTip:(id)a1 forCharacterAtIndex:(unsigned long long)a2;
- (id)textView;
- (id)textAttributes;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (void)syncAttributes;
- (void)setAdditionalHeight:(double)a0;
- (id)additionalHeightConstraint;
- (id)initWithLinkTableCardSection:(id)a0;
- (id)textAttributesForURL:(id)a0;
- (id)attributedStringForLink:(id)a0;
- (id)attributedStringForSpace;
- (id)attributedStringForLinks:(id)a0;
- (void)textView:(id)a0 syncLinks:(id)a1;
- (id)linkTableSliceView;
- (id)textViewMinHeightConstraint;

@end
