@class NSString;

@interface PACropModeDrawingDelegate : NSObject <PAImageDrawingDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previewExtent;
}

@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } previewTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)drawImageLayer:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 display:(id)a2 transform:(id)a3 context:(id)a4;
- (id)initWithPreviewSize:(struct CGSize { double x0; double x1; })a0;

@end
