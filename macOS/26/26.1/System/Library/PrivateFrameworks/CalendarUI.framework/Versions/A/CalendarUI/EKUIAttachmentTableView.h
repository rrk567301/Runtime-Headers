@class EKUIAttachmentGadget;

@interface EKUIAttachmentTableView : NSTableView

@property (weak) EKUIAttachmentGadget *controller;

- (void)endPreviewPanelControl:(id)a0;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (BOOL)canBecomeKeyView;
- (id)initWithController:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (void).cxx_destruct;

@end
