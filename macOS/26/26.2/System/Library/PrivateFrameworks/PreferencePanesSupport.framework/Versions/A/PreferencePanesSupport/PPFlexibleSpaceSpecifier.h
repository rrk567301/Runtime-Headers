@class NSLayoutConstraint;

@interface PPFlexibleSpaceSpecifier : PPSpecifier

@property (weak) NSLayoutConstraint *constraint;
@property BOOL autoresizing;
@property double height;

+ (id)autoresizingFlexibleSpaceSpecifier;
+ (id)flexibleSpaceSpecifier;

- (double)height;
- (void)setHeight:(double)a0;
- (void).cxx_destruct;

@end
