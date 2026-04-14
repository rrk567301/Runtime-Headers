@interface ASCBlockDynamicColor : NSDynamicNamedColor

@property (readonly, copy, nonatomic) id /* block */ dynamicProvider;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resolvedColor;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)initWithDynamicProvider:(id /* block */)a0;

@end
