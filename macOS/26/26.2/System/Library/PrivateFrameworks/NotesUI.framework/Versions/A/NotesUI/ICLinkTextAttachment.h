@protocol ICLinkEditorDelegate;

@interface ICLinkTextAttachment : ICInlineTextAttachment

@property (weak, nonatomic) id<ICLinkEditorDelegate> linkDelegate;

- (void).cxx_destruct;

@end
