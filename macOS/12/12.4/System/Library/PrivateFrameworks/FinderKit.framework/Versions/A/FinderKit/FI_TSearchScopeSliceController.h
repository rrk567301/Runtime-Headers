@class NSObject;
@protocol TSearchScopeSliceControllerDelegate;

@interface FI_TSearchScopeSliceController : FI_TViewController

@property (weak, nonatomic) NSObject<TSearchScopeSliceControllerDelegate> *scopeSliceDelegate;

- (id)nibName;
- (id)currentScopeString;
- (void)setScopePlusMinusButtonTitle:(BOOL)a0;
- (void)setScopePlusMinusButtonEnabled:(BOOL)a0;
- (void)setButtonTitles:(const void *)a0 andToolTips:(const void *)a1;
- (void)setScopeSelection:(unsigned long long)a0;
- (void)setSaveButtonEnabled:(BOOL)a0;
- (unsigned long long)scopeSelection;
- (id)scopeSlice;

@end
