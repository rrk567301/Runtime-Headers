@class EKUIAttachmentGadget;

@interface EKUIAttachmentTableView : NSTableView

@property (weak) EKUIAttachmentGadget *controller;

- (id)initWithController:(id)a0;
- (void)endPreviewPanelControl:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;

@end
