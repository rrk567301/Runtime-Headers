@protocol NSObject;

@interface _NSPredicateRule : NSPredicateRule {
    id<NSObject> _fact;
    double _grade;
    BOOL _asserting;
}

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)performActionWithSystem:(id)a0;
- (id)initWithPredicate:(id)a0 fact:(id)a1 grade:(double)a2 asserting:(BOOL)a3;

@end
