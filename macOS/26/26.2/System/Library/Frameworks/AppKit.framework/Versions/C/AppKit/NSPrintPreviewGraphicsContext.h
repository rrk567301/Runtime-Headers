@class NSGraphicsContext;

@interface NSPrintPreviewGraphicsContext : NSProxy {
    NSGraphicsContext *_previousContext;
}

- (BOOL)conformsToProtocol:(id)a0;
- (id)attributes;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (BOOL)isDrawingToScreen;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithPreviousContext:(id)a0;

@end
