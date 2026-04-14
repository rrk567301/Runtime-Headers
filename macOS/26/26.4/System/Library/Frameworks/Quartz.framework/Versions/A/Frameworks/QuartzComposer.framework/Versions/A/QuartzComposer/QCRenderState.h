@class QCPatch, QCContext;

@interface QCRenderState : NSObject {
    QCPatch *_patch;
    QCContext *_context;
    void *_unused[4];
}

- (id)context;
- (void)dealloc;
- (id)initWithContext:(id)a0 patch:(id)a1;
- (id)patch;

@end
