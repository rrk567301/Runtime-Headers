@interface DocumentUnderstanding.DUDisplayInfo : NSObject <NSCoding, NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInWindow;
@property (nonatomic) struct CGPoint { double x0; double x1; } absoluteOriginOnScreen;
@property (nonatomic) BOOL isOnScreen;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
