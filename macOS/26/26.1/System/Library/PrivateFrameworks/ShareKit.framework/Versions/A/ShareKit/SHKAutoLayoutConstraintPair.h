@class NSLayoutConstraint;

@interface SHKAutoLayoutConstraintPair : NSObject

@property (readonly) NSLayoutConstraint *firstConstraint;
@property (readonly) NSLayoutConstraint *secondConstraint;

- (id)constraints;
- (void).cxx_destruct;
- (id)initWithFirstConstraint:(id)a0 secondConstraint:(id)a1;

@end
