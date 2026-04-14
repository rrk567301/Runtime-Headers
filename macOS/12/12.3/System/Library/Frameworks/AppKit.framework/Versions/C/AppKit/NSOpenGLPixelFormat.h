@interface NSOpenGLPixelFormat : NSObject <NSCoding> {
    struct _CGLPixelFormatObject { } *_CGLPixelFormat;
}

@property (readonly) int numberOfVirtualScreens;
@property (readonly) struct _CGLPixelFormatObject { } *CGLPixelFormatObj;

+ (void)initialize;
+ (id)openGLPixelFormatWithCGLPixelFormatObj:(struct _CGLPixelFormatObject { } *)a0;

- (void)dealloc;
- (id)init;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAttributes:(id)a0;
- (id)attributes;
- (id)initWithAttributes:(const unsigned int *)a0;
- (id)_fallbackInitializer;
- (id)initWithCGLPixelFormatObj:(struct _CGLPixelFormatObject { } *)a0;
- (void)getValues:(int *)a0 forAttribute:(unsigned int)a1 forVirtualScreen:(int)a2;

@end
