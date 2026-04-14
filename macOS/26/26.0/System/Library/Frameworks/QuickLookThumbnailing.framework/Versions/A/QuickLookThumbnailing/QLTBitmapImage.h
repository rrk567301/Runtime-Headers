@class NSData, QLTBitmapFormat;

@interface QLTBitmapImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) QLTBitmapFormat *format;

+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithFormat:(id)a0 data:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (struct CGImage { } *)image;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
