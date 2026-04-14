@class NoteAttachmentPresentation, DOMHTMLElement;

@interface NoteAttachmentPresentationOccurence : NSObject

@property (readonly, nonatomic) NoteAttachmentPresentation *presentation;
@property (readonly, nonatomic) DOMHTMLElement *element;

- (id)init;
- (void).cxx_destruct;
- (id)previewItemURL;
- (id)previewItemTitle;
- (id)initWithPresentation:(id)a0 element:(id)a1;

@end
