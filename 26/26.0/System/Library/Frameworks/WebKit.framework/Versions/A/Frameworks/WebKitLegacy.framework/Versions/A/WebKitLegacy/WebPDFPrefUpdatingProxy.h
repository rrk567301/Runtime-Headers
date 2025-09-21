@class WebPDFView;

@interface WebPDFPrefUpdatingProxy : NSProxy {
    WebPDFView *view;
}

- (id)initWithView:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
