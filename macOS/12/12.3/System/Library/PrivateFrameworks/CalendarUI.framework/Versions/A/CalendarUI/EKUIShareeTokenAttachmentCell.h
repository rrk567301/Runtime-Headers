@class EKUIShareesGadget;

@interface EKUIShareeTokenAttachmentCell : EKUITokenAttachmentCell

@property (retain) EKUIShareesGadget *shareeGadget;

- (void).cxx_destruct;
- (id)initCellForTokenField:(id)a0;
- (BOOL)shouldShowToken;
- (id)imageForRepresentedObject;
- (id)stringForRepresentedObject;

@end
