@class NSString;

@interface NSLumaReadingView : NSView

@property (nonatomic) BOOL windowServerAware;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic) double _luma;
@property (nonatomic, readonly) double luma;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)backdropLayer:(id)a0 didChangeLuma:(double)a1;
- (id)makeBackingLayer;

@end
