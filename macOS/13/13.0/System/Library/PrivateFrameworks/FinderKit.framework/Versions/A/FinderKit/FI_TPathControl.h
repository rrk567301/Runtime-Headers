@class NSObject;
@protocol TPathControlDelegate;

@interface FI_TPathControl : NSPathControl

@property (weak) NSObject<TPathControlDelegate> *delegate;
@property (nonatomic) BOOL delayWindowOrderingOnClickThrough;

+ (Class)cellClass;

- (BOOL)acceptsFirstResponder;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (id)menuForEvent:(id)a0;
- (BOOL)canBecomeKeyView;
- (void)viewDidChangeBackingProperties;
- (id)clickedComponentCell;
- (void)setComponentCells:(id)a0;
- (id)componentCells;

@end
