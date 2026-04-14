@interface CIRenderTask : NSObject {
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(void *)a0;

- (id)_pdfDataRepresentation;
- (id)initWithInternalTask:(void *)a0;
- (void *)internalRepresentation;
- (id)init;
- (id)waitUntilCompletedAndReturnError:(id *)a0;
- (void)dealloc;

@end
