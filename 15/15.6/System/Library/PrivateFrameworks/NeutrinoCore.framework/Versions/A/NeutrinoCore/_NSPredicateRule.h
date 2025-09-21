@class NSString;

@interface _NSPredicateRule : NSPredicateRule {
    NSString *_fact;
    double _grade;
    char _asserting;
}

+ (char)supportsSecureCoding;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicate:(id)a0 fact:(id)a1 grade:(double)a2 asserting:(char)a3;
- (void)performActionWithSystem:(id)a0;

@end
