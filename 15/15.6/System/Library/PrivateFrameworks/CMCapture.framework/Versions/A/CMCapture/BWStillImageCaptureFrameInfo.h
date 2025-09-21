@interface BWStillImageCaptureFrameInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long mainFlags;
@property (readonly, nonatomic) unsigned long long sifrFlags;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMainFlags:(unsigned long long)a0 sifrFlags:(unsigned long long)a1;

@end
