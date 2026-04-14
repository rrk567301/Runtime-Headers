@class PXGHostingController;

@interface PXGHostingControllerProposedSize : NSObject

@property (weak, nonatomic) PXGHostingController *hostingController;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;

- (id)description;
- (void).cxx_destruct;
- (BOOL)accept;
- (id)initWithReferenceSize:(struct CGSize { double x0; double x1; })a0 hostingController:(id)a1;
- (void)willAccept;

@end
