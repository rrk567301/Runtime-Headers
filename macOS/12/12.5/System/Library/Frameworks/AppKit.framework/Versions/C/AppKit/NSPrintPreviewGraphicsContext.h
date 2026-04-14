@class NSGraphicsContext;

@interface NSPrintPreviewGraphicsContext : NSProxy {
    NSGraphicsContext *_previousContext;
}

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)attributes;
- (BOOL)isFlipped;
- (BOOL)isDrawingToScreen;
- (id)initWithPreviousContext:(id)a0;

@end
