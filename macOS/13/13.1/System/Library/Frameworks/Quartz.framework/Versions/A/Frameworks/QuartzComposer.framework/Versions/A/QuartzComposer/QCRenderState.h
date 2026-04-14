@class QCPatch, QCContext;

@interface QCRenderState : NSObject {
    QCPatch *_patch;
    QCContext *_context;
    void *_unused[4];
}

- (void)dealloc;
- (id)context;
- (id)patch;
- (id)initWithContext:(id)a0 patch:(id)a1;

@end
