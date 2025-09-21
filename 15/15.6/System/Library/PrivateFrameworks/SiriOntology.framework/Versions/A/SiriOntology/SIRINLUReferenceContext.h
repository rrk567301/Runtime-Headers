@interface SIRINLUReferenceContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char contextualReference;
@property (nonatomic) char disambiguationNeeded;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContextualReference:(char)a0 DisambiguationNeeded:(char)a1;

@end
