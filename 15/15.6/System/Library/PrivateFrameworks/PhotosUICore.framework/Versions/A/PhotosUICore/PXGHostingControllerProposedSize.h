@class PXGHostingController;

@interface PXGHostingControllerProposedSize : NSObject

@property (weak, nonatomic) PXGHostingController *hostingController;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) char shouldPreferAcceptingReferenceSize;

- (id)description;
- (void).cxx_destruct;
- (char)accept;
- (id)initWithReferenceSize:(struct CGSize { double x0; double x1; })a0 shouldPreferAcceptingReferenceSize:(char)a1 hostingController:(id)a2;
- (void)willAccept;

@end
