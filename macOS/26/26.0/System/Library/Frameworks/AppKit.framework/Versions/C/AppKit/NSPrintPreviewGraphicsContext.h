@class NSGraphicsContext;

@interface NSPrintPreviewGraphicsContext : NSProxy {
    NSGraphicsContext *_previousContext;
}

- (void)dealloc;
- (BOOL)isFlipped;
- (void)forwardInvocation:(id)a0;
- (BOOL)isDrawingToScreen;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)attributes;
- (id)initWithPreviousContext:(id)a0;

@end
