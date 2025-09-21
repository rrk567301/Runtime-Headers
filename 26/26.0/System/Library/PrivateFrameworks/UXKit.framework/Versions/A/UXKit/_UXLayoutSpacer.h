@class NSString, NSLayoutYAxisAnchor, NSLayoutConstraint, NSLayoutDimension;

@interface _UXLayoutSpacer : NSLayoutGuide <UXLayoutSupport> {
    NSLayoutConstraint *_counterDimensionConstraint;
    NSLayoutConstraint *_dimensionConstraint;
}

@property (nonatomic) double length;
@property (nonatomic) BOOL horizontal;
@property (copy, nonatomic) id /* block */ lengthUpdateBlock;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly) NSLayoutDimension *heightAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_verticalLayoutSpacer;
+ (id)_horizontalLayoutSpacer;

- (void)_setUpCounterDimensionConstraint;
- (void)_activate;
- (void).cxx_destruct;
- (void)_setUpDimensionConstraintWithLength:(double)a0;

@end
