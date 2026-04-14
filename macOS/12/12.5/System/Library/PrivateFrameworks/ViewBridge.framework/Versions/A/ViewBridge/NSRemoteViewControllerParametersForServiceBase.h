@interface NSRemoteViewControllerParametersForServiceBase : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrameInScreenCoords;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
