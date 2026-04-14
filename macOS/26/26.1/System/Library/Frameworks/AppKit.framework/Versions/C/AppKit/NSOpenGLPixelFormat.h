@interface NSOpenGLPixelFormat : NSObject <NSCoding> {
    struct _CGLPixelFormatObject { } *_CGLPixelFormat;
}

@property (readonly) int numberOfVirtualScreens;
@property (readonly) struct _CGLPixelFormatObject { } *CGLPixelFormatObj;

+ (void)initialize;
+ (id)openGLPixelFormatWithCGLPixelFormatObj:(struct _CGLPixelFormatObject { } *)a0;

- (id)initWithAttributes:(const unsigned int *)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setAttributes:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)attributes;
- (id)init;
- (id)_fallbackInitializer;
- (void)getValues:(int *)a0 forAttribute:(unsigned int)a1 forVirtualScreen:(int)a2;
- (id)initWithCGLPixelFormatObj:(struct _CGLPixelFormatObject { } *)a0;

@end
