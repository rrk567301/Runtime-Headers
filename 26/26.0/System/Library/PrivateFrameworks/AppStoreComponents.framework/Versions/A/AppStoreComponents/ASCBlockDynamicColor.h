@interface ASCBlockDynamicColor : NSDynamicNamedColor

@property (readonly, copy, nonatomic) id /* block */ dynamicProvider;

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)resolvedColor;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDynamicProvider:(id /* block */)a0;

@end
