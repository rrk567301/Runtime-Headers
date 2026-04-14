@class NSData;

@interface SCNPrecomputedLightingEnvironment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *radianceData;
@property (retain, nonatomic) NSData *irradianceData;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;

@end
