@interface ASCBlockDynamicColor : NSDynamicNamedColor

@property (readonly, copy, nonatomic) id /* block */ dynamicProvider;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)resolvedColor;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDynamicProvider:(id /* block */)a0;

@end
