@interface NSViewBackingStoreImage : NSObject <NSCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _definedRect;
    struct CGDisplayList { } *_displayList;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } definedRect;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } affectedRect;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithCGDisplayList:(struct CGDisplayList { } *)a0 definedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
