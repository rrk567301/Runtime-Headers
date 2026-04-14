@interface CIRenderTask : NSObject {
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(void *)a0;

- (id)initWithInternalTask:(void *)a0;
- (id)init;
- (id)waitUntilCompletedAndReturnError:(id *)a0;
- (id)_pdfDataRepresentation;
- (void)dealloc;
- (void *)internalRepresentation;

@end
