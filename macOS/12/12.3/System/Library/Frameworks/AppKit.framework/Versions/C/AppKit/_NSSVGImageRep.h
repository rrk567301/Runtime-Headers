@interface _NSSVGImageRep : NSImageRep {
    struct CGSVGDocument { } *_document;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSVGDocument:(struct CGSVGDocument { } *)a0;
- (BOOL)draw;

@end
