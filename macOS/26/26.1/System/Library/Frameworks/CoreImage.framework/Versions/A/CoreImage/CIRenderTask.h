@interface CIRenderTask : NSObject {
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(void *)a0;

- (id)_pdfDataRepresentation;
- (id)initWithInternalTask:(void *)a0;
- (void *)internalRepresentation;
- (void)dealloc;
- (id)waitUntilCompletedAndReturnError:(id *)a0;
- (id)init;

@end
