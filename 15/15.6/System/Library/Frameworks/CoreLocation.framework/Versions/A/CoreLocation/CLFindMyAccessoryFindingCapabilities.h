@interface CLFindMyAccessoryFindingCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned int capabilities;
@property (nonatomic) char supportsFC1ND;
@property (nonatomic) char supportsNBAMMS;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)capabilitiesString;
- (id)initWithSupportsFC1ND:(char)a0 supportsNBAMMS:(char)a1 capabilities:(unsigned int)a2;

@end
