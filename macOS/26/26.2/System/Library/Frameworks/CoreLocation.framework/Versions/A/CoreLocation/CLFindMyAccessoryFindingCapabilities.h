@interface CLFindMyAccessoryFindingCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int capabilities;
@property (nonatomic) BOOL supportsFC1ND;
@property (nonatomic) BOOL supportsNBAMMS;
@property (nonatomic) BOOL supportsSimultaneousRanging;
@property (readonly) BOOL supportsUnii5;

- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;
- (id)capabilitiesString;
- (id)initWithSupportsFC1ND:(BOOL)a0 supportsNBAMMS:(BOOL)a1 supportsUnii5:(BOOL)a2 capabilities:(unsigned int)a3 supportsSimultaneousRanging:(BOOL)a4;

@end
