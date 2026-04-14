@class NSString;

@interface VFXViewConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *colorSpaceName;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) BOOL wantsExtendedDynamicRange;
@property (nonatomic) BOOL additiveWritesToAlpha;

- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end
