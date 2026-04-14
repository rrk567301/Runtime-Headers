@class EKUIAttachmentGadget;

@interface EKUIAttachmentTableView : NSTableView

@property (weak) EKUIAttachmentGadget *controller;

- (id)initWithController:(id)a0;
- (BOOL)canBecomeKeyView;
- (void).cxx_destruct;
- (void)beginPreviewPanelControl:(id)a0;
- (void)endPreviewPanelControl:(id)a0;
- (BOOL)acceptsPreviewPanelControl:(id)a0;

@end
