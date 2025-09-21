@interface CIRenderTask : NSObject {
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(void *)a0;

- (void)dealloc;
- (id)waitUntilCompletedAndReturnError:(id *)a0;
- (id)_pdfDataRepresentation;
- (id)init;
- (void *)internalRepresentation;
- (id)initWithInternalTask:(void *)a0;

@end
