@class ICTK2MacTextView;

@interface ICTK2TextContainer : NSTextContainer <ICSystemPaperTextAttachmentNotesEditorBridgeWorkaround>

@property (nonatomic) BOOL inPreviewMode;
@property (nonatomic) BOOL insideSystemPaper;
@property (nonatomic) BOOL insideSiriSnippet;
@property (readonly, nonatomic) ICTK2MacTextView *tk2TextView;

- (id)layoutManager;

@end
