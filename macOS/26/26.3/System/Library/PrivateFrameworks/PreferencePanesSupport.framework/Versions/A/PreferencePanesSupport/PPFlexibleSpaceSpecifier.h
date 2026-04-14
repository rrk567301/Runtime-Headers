@class NSLayoutConstraint;

@interface PPFlexibleSpaceSpecifier : PPSpecifier

@property (weak) NSLayoutConstraint *constraint;
@property BOOL autoresizing;
@property double height;

+ (id)autoresizingFlexibleSpaceSpecifier;
+ (id)flexibleSpaceSpecifier;

- (void)setHeight:(double)a0;
- (double)height;
- (void).cxx_destruct;

@end
