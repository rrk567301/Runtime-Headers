@interface NSCoreUIImageRep : NSImageRep {
    struct __CFDictionary { } *_coreUIImageOptions;
    struct __CFString { } *_cocoaName;
    char _template;
}

+ (id)imageRepWithCocoaName:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoreUIDrawOptions:(struct __CFDictionary { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (char)_drawOnlyUsesOneDrawingOperation;
- (char)_incorporatesContentStyling;
- (struct __CFDictionary { } *)coreUIDrawOptions;
- (char)draw;
- (id)initWithCocoaName:(id)a0;
- (char)isTemplate;
- (void)setTemplate:(char)a0;

@end
