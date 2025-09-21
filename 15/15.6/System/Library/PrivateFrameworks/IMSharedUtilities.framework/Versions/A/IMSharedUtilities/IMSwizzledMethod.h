@interface IMSwizzledMethod : NSObject

@property (retain, nonatomic) IMSwizzledMethod *swizzledWithMethod;
@property (readonly, nonatomic, getter=isSwizzled) char swizzled;
@property (readonly, nonatomic) struct objc_method { } *method;
@property (readonly, nonatomic) void /* function */ *implementation;
@property (readonly, nonatomic) const char *typeEncoding;
@property (readonly, nonatomic) Class swizzledClass;
@property (readonly, nonatomic) SEL swizzledSelector;

- (id)description;
- (void).cxx_destruct;
- (id)initWithClass:(Class)a0 selector:(SEL)a1;
- (char)swizzleWithMethod:(id)a0;
- (char)unswizzle;

@end
