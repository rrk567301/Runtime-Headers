@interface NSCustomImageRep : NSImageRep {
    unsigned int _reserved;
    SEL _drawMethod;
    id _drawObject;
}

@property (getter=isFlipped) char flipped;
@property (readonly) id /* block */ drawHandler;
@property (readonly, copy) id /* block */ drawingHandler;
@property (readonly) SEL drawSelector;
@property (readonly, weak) id delegate;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 flipped:(char)a1 drawingHandler:(id /* block */)a2;
- (id)_imageRepsForEncodingWithCoder:(id)a0;
- (char)_wantsToBeCached;
- (char)draw;
- (id)initWithDrawSelector:(SEL)a0 delegate:(id)a1;
- (id)initWithDrawSelector:(SEL)a0 delegate:(id)a1 flipped:(char)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 drawHandler:(id /* block */)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 flipped:(char)a1 drawHandler:(id /* block */)a2;

@end
