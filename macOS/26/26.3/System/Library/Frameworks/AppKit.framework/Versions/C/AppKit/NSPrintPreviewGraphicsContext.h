@class NSGraphicsContext;

@interface NSPrintPreviewGraphicsContext : NSProxy {
    NSGraphicsContext *_previousContext;
}

- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isFlipped;
- (id)description;
- (id)attributes;
- (void)dealloc;
- (BOOL)isDrawingToScreen;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithPreviousContext:(id)a0;

@end
