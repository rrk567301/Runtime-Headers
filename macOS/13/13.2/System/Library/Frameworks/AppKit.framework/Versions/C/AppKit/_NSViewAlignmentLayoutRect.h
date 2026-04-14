@protocol NSAKLayoutItem;

@interface _NSViewAlignmentLayoutRect : NSLayoutRect

@property (readonly) id<NSAKLayoutItem> hostItem;

+ (id)layoutRectWithLeadingAnchor:(id)a0 topAnchor:(id)a1 trailingAnchor:(id)a2 bottomAnchor:(id)a3;

- (id)leadingAnchor;
- (id)trailingAnchor;
- (id)topAnchor;
- (id)bottomAnchor;
- (id)widthAnchor;
- (id)heightAnchor;
- (id)centerXAnchor;
- (id)centerYAnchor;
- (id)initWithHostItem:(id)a0;
- (id)_equationDescriptionInParent;

@end
