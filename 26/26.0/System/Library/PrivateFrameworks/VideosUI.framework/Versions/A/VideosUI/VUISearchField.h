@class NSString;
@protocol VUISearchFieldDelegate;

@interface VUISearchField : NSSearchField <NSSearchFieldDelegate>

@property (nonatomic) BOOL isFirstResponder;
@property (nonatomic) BOOL allowBecomeKeyView;
@property (weak, nonatomic) id<VUISearchFieldDelegate> vuiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (void)ignoreBecomeKeyViewNextTime;

@end
