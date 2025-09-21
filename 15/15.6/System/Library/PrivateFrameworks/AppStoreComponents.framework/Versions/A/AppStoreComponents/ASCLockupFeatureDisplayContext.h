@class NSString, ASCLockupDisplayContext;

@interface ASCLockupFeatureDisplayContext : NSObject <ASCLockupFeature>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayContext:(id)a0;

@end
