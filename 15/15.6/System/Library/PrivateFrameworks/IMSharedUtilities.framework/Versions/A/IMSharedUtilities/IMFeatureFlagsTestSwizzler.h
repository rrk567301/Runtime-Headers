@class IMSwizzledMethod;

@interface IMFeatureFlagsTestSwizzler : NSObject

@property (readonly, nonatomic) SEL feature;
@property (readonly, nonatomic) IMSwizzledMethod *originalMethod;
@property (readonly, nonatomic) IMSwizzledMethod *replacementMethod;
@property (readonly, nonatomic) SEL testMethod;
@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic, getter=isSwizzled) char swizzled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)swizzle;
- (id)initWithFeature:(SEL)a0 enabled:(char)a1;
- (void)unswizzle;

@end
