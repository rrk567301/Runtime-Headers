@class EKUIAttachmentGadget;

@interface EKUIAttachmentTableView : NSTableView

@property (weak) EKUIAttachmentGadget *controller;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (void)endPreviewPanelControl:(id)a0;

@end
