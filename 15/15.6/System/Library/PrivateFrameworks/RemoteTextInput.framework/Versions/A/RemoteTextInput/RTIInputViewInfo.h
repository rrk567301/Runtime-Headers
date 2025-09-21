@interface RTIInputViewInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) char shouldShowDockView;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
