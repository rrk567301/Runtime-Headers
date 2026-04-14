@protocol MTLBuffer;

@interface CCMTLBuffer2D : NSObject <NSCopying, NSSecureCoding> {
    void *_contents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic) unsigned long long pixelFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBuffer:(SEL)a0 size:(id)a1 pixelFormat:(unsigned long long)a2;

@end
