@interface CASDFGenerator : NSObject {
    void *_renderer;
    void *_context;
}

- (void)dealloc;
- (id)init;
- (struct CGImage { } *)generateSDFWithRequest:(id)a0 forImage:(struct CGImage { } *)a1;

@end
