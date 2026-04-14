@class NSString;

@interface AVContainerStyleSheet : NSObject <AVContainerStyleSheet>

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSpacing;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 contentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 contentSpacing:(struct CGSize { double x0; double x1; })a2;

@end
