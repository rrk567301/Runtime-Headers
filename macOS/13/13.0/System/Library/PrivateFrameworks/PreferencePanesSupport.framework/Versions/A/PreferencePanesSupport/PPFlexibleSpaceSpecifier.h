@class NSLayoutConstraint;

@interface PPFlexibleSpaceSpecifier : PPSpecifier

@property (weak) NSLayoutConstraint *constraint;
@property BOOL autoresizing;
@property double height;

+ (id)autoresizingFlexibleSpaceSpecifier;
+ (id)flexibleSpaceSpecifier;

- (void).cxx_destruct;
- (void)setHeight:(double)a0;
- (double)height;

@end
