@class NSMorphology;

@interface NSInflectionRuleExplicit : NSInflectionRule

@property (readonly, copy) NSMorphology *morphology;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMorphology:(id)a0;

@end
