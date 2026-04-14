@class NSPredicate;

@interface NSPredicateRule : NURule

@property (readonly, retain, nonatomic) NSPredicate *predicate;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluatePredicateWithSystem:(id)a0;

@end
