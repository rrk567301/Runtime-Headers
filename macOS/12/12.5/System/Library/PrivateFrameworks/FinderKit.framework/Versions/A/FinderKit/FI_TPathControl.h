@class NSObject;
@protocol TPathControlDelegate;

@interface FI_TPathControl : NSPathControl

@property (weak) NSObject<TPathControlDelegate> *delegate;
@property (nonatomic) BOOL delayWindowOrderingOnClickThrough;

+ (Class)cellClass;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (id)menuForEvent:(id)a0;
- (BOOL)canBecomeKeyView;
- (void)viewDidChangeBackingProperties;
- (id)componentCells;
- (void)setComponentCells:(id)a0;
- (id)clickedComponentCell;

@end
