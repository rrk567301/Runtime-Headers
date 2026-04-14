@class DedupeElementCompat;

@interface UIUDedupeElement : NSObject

@property (readonly) DedupeElementCompat *underlyingObject;
@property (nonatomic) BOOL isDuplicate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (id)initWithContents:(id)a0;
- (void).cxx_destruct;

@end
