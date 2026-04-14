@protocol NSAKLayoutItem;

@interface _NSViewAlignmentLayoutRect : NSLayoutRect

@property (readonly) id<NSAKLayoutItem> hostItem;

+ (id)layoutRectWithLeadingAnchor:(id)a0 topAnchor:(id)a1 trailingAnchor:(id)a2 bottomAnchor:(id)a3;

- (id)widthAnchor;
- (id)centerXAnchor;
- (id)heightAnchor;
- (id)bottomAnchor;
- (id)leadingAnchor;
- (id)trailingAnchor;
- (id)centerYAnchor;
- (id)topAnchor;
- (id)initWithHostItem:(id)a0;
- (id)_equationDescriptionInParent;

@end
