@class NSObject;
@protocol TPathControlDelegate;

@interface FI_TPathControl : NSPathControl

@property (weak) NSObject<TPathControlDelegate> *delegate;
@property (nonatomic) BOOL delayWindowOrderingOnClickThrough;

+ (Class)cellClass;

- (id)menuForEvent:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)viewDidChangeBackingProperties;
- (BOOL)canBecomeKeyView;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (id)clickedComponentCell;
- (id)componentCells;
- (void)setComponentCells:(id)a0;

@end
