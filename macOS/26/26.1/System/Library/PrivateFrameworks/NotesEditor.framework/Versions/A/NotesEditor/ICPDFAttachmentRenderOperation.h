@class ICPDFAttachmentView, ICAttachment;

@interface ICPDFAttachmentRenderOperation : NSOperation

@property (weak) ICPDFAttachmentView *view;
@property struct CGSize { double width; double height; } size;
@property double scale;
@property (readonly, weak) ICAttachment *attachment;
@property (readonly) double width;

- (void)main;
- (void).cxx_destruct;
- (id)initWithView:(id)a0;
- (id)generateImageForPrinting;

@end
