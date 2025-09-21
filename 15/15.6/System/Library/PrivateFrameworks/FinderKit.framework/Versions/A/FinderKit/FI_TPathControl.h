@class NSObject;
@protocol TPathControlDelegate;

@interface FI_TPathControl : NSPathControl

@property (weak) NSObject<TPathControlDelegate> *delegate;
@property (nonatomic) BOOL delayWindowOrderingOnClickThrough;

+ (Class)cellClass;

- (char)acceptsFirstResponder;
- (char)canBecomeKeyView;
- (id)menuForEvent:(id)a0;
- (char)shouldDelayWindowOrderingForEvent:(id)a0;
- (void)viewDidChangeBackingProperties;
- (id)clickedComponentCell;
- (id)componentCells;
- (void)setComponentCells:(id)a0;

@end
