@class EKUIAttachmentGadget;

@interface EKUIAttachmentTableView : NSTableView

@property (weak) EKUIAttachmentGadget *controller;

- (void).cxx_destruct;
- (char)acceptsPreviewPanelControl:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (char)canBecomeKeyView;
- (void)endPreviewPanelControl:(id)a0;
- (id)initWithController:(id)a0;

@end
