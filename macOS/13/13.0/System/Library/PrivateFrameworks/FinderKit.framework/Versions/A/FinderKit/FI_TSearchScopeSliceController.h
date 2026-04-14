@class NSObject;
@protocol TSearchScopeSliceControllerDelegate;

@interface FI_TSearchScopeSliceController : FI_TViewController

@property (weak, nonatomic) NSObject<TSearchScopeSliceControllerDelegate> *scopeSliceDelegate;

- (id)nibName;
- (id)currentScopeString;
- (void)setScopePlusMinusButtonEnabled:(BOOL)a0;
- (void)setScopePlusMinusButtonTitle:(BOOL)a0;
- (id)scopeSlice;
- (void)setButtonTitles:(const void *)a0 andToolTips:(const void *)a1;
- (void)setScopeSelection:(unsigned long long)a0;
- (unsigned long long)scopeSelection;
- (void)setSaveButtonEnabled:(BOOL)a0;

@end
