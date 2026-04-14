@interface WKPDFFormMutationObserver : NSObject {
    void *_plugin;
}

- (id)initWithPlugin:(void *)a0;
- (void)formChanged:(id)a0;

@end
