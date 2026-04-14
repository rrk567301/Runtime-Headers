@interface NSCoreUIImageRep : NSImageRep {
    struct __CFDictionary { } *_coreUIImageOptions;
    struct __CFString { } *_cocoaName;
    BOOL _template;
}

+ (id)imageRepWithCocoaName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTemplate:(BOOL)a0;
- (BOOL)isTemplate;
- (BOOL)draw;
- (id)initWithCoreUIDrawOptions:(struct __CFDictionary { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)_incorporatesContentStyling;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (struct __CFDictionary { } *)coreUIDrawOptions;
- (id)initWithCocoaName:(id)a0;

@end
