@class NSPredicate;

@interface NSPredicateRule : NURule

@property (readonly, retain, nonatomic) NSPredicate *predicate;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluatePredicateWithSystem:(id)a0;

@end
