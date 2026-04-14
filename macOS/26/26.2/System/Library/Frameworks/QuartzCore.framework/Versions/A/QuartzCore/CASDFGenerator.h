@interface CASDFGenerator : NSObject {
    void *_renderer;
    void *_context;
}

- (id)init;
- (void)dealloc;
- (struct CGImage { } *)generateSDFWithRequest:(id)a0 forImage:(struct CGImage { } *)a1;

@end
