@class NSString;
@protocol CPKNavigationDelegate;

@interface CPKSearchField : NSSearchField <CPKNavigationSender>

@property (readonly, nonatomic) char hasActiveNavigationTarget;
@property (readonly, nonatomic) id<CPKNavigationDelegate> navigationDelegate;
@property char hasKeyFocus;
@property (nonatomic) char canAllowFirstResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (void)setStringValue:(id)a0;
- (char)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)resignFirstResponder;
- (void)setNavigationDelegate:(id)a0;
- (void)_changeHavingKeyFocus:(char)a0;
- (void)setHasActiveNavigationTarget:(char)a0;

@end
