@class NSPredicate;

@interface NSPredicateRule : NURule

@property (readonly, retain, nonatomic) NSPredicate *predicate;

+ (char)supportsSecureCoding;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicate:(id)a0;
- (char)evaluatePredicateWithSystem:(id)a0;

@end
