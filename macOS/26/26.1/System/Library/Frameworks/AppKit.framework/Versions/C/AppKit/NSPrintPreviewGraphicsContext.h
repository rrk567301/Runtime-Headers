@class NSGraphicsContext;

@interface NSPrintPreviewGraphicsContext : NSProxy {
    NSGraphicsContext *_previousContext;
}

- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void)dealloc;
- (BOOL)isDrawingToScreen;
- (id)attributes;
- (BOOL)isFlipped;
- (id)initWithPreviousContext:(id)a0;

@end
