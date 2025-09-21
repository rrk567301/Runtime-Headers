@interface PHExtensionHostViewPreferredSizes : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredMinimumSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredMaximumSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSizesFromViewController:(id)a0;
- (char)isEqualToCurrentSizesInViewController:(id)a0;

@end
