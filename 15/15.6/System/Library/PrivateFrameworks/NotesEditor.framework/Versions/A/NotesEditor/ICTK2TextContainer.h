@class ICTK2MacTextView;
@protocol ICLinkMenuDelegate;

@interface ICTK2TextContainer : NSTextContainer <ICSystemPaperTextAttachmentNotesEditorBridgeWorkaround>

@property (nonatomic) char inPreviewMode;
@property (nonatomic) char insideSystemPaper;
@property (nonatomic) char insideSiriSnippet;
@property (nonatomic) id<ICLinkMenuDelegate> linkDelegate;
@property (readonly, nonatomic) ICTK2MacTextView *tk2TextView;

- (id)layoutManager;

@end
