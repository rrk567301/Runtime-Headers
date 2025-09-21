@class NSString;
@protocol VUISearchFieldDelegate;

@interface VUISearchField : NSSearchField <NSSearchFieldDelegate>

@property (nonatomic) char isFirstResponder;
@property (nonatomic) char allowBecomeKeyView;
@property (weak, nonatomic) id<VUISearchFieldDelegate> vuiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)becomeFirstResponder;
- (char)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)resignFirstResponder;
- (void)ignoreBecomeKeyViewNextTime;

@end
