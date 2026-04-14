@interface CIRenderTask : NSObject {
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(void *)a0;

- (void *)internalRepresentation;
- (id)initWithInternalTask:(void *)a0;
- (id)waitUntilCompletedAndReturnError:(id *)a0;
- (id)_pdfDataRepresentation;
- (id)init;
- (void)dealloc;

@end
