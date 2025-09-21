@class NSString, ICInlineTextFindingResult, NSAttributedString, ICAttachment;

@interface ICTableTextFindingResult : ICTextFindingResult

@property (weak, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSAttributedString *findableString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInFindableString;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) unsigned long long row;
@property (nonatomic) unsigned long long column;
@property (nonatomic) BOOL ignoreCase;
@property (retain, nonatomic) ICInlineTextFindingResult *inlineTextFindingResult;

- (long long)compare:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)framesForHighlightInTextView:(id)a0;
- (void)selectInTextView:(id)a0;
- (id)tableAttachmentViewControllerForTextView:(id)a0;

@end
