@class INImage;

@interface LNImage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) INImage *inImage;
@property (readonly, nonatomic) LNImage *proxiedImageCopy;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSystemImageNamed:(id)a0;
- (id)initWithImageNamed:(id)a0;
- (id)initWithINImage:(id)a0;
- (id)initWithURL:(id)a0 width:(double)a1 height:(double)a2 renderingMode:(unsigned long long)a3;
- (id)initWithURL:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithData:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithImageNamed:(id)a0 renderingMode:(unsigned long long)a1;

@end
