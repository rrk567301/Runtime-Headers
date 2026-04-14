@interface GPImageFormat : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ width;
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ bitsPerComponent;
    void /* unknown type, empty encoding */ bitsPerPixel;
    void /* unknown type, empty encoding */ bytesPerRow;
    void /* unknown type, empty encoding */ bitmapInfo;
    void /* unknown type, empty encoding */ colorSpace;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
