@class NSString, ICNote, NSArray, NSTextView, NSAttributedString;
@protocol ICTextFindingDataSource, NSTextFinderClient;

@interface ICMTextViewFinderClient_Synchronous : NSObject <NSTextFinderClient>

@property (retain, nonatomic) NSAttributedString *searchableString;
@property (weak, nonatomic) id<ICTextFindingDataSource> dataSource;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) NSTextView<NSTextFinderClient> *textView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRangeForReplace;
@property (readonly, getter=isSelectable) char selectable;
@property (readonly) char allowsMultipleSelection;
@property (readonly, getter=isEditable) char editable;
@property (readonly) NSString *string;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } firstSelectedRange;
@property (copy) NSArray *selectedRanges;
@property (readonly, copy) NSArray *visibleCharacterRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)contentViewAtIndex:(unsigned long long)a0 effectiveCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)drawCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forContentView:(id)a1;
- (id)initWithDataSource:(id)a0;
- (id)rectsForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)shouldReplaceCharactersInRanges:(id)a0 withStrings:(id)a1;
- (id)findableForAttachment:(id)a0;
- (char)rangesAreInlineAttachments:(id)a0;
- (void)refreshSearchableString;

@end
