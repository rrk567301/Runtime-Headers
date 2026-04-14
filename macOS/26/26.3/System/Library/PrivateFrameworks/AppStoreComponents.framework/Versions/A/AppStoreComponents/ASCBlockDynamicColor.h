@interface ASCBlockDynamicColor : NSDynamicNamedColor

@property (readonly, copy, nonatomic) id /* block */ dynamicProvider;

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)resolvedColor;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDynamicProvider:(id /* block */)a0;

@end
