@interface TokenGenerationInference.EncodedImageArray : _TtCs12_SwiftObject <EncodedImages> {
    void /* unknown type, empty encoding */ imageTokenIDGenerator;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ encodedImages;
}

@property (nonatomic, readonly) int imageCount;

- (void)getEncodedImageAt:(int)a0 withHandler:(id /* block */)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeAt:(int)a0;

@end
