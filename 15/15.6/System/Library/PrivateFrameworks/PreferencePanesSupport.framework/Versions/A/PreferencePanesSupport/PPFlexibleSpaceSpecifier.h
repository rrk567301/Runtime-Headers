@class NSLayoutConstraint;

@interface PPFlexibleSpaceSpecifier : PPSpecifier

@property (weak) NSLayoutConstraint *constraint;
@property char autoresizing;
@property double height;

+ (id)autoresizingFlexibleSpaceSpecifier;
+ (id)flexibleSpaceSpecifier;

- (void).cxx_destruct;
- (double)height;
- (void)setHeight:(double)a0;

@end
