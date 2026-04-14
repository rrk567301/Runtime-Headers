@class WebPDFView;

@interface WebPDFPrefUpdatingProxy : NSProxy {
    WebPDFView *view;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithView:(id)a0;

@end
