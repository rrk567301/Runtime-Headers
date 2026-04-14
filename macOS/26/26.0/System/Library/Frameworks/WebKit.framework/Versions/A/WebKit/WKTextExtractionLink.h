@class NSURL;

@interface WKTextExtractionLink : NSObject {
    void /* unknown type, empty encoding */ backingURL;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
