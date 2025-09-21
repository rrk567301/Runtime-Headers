@class NSString;
@protocol CPKNavigationDelegate;

@interface CPKSearchField : NSSearchField <CPKNavigationSender>

@property (readonly, nonatomic) BOOL hasActiveNavigationTarget;
@property (readonly, nonatomic) id<CPKNavigationDelegate> navigationDelegate;
@property BOOL hasKeyFocus;
@property (nonatomic) BOOL canAllowFirstResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStringValue:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setNavigationDelegate:(id)a0;
- (void)_changeHavingKeyFocus:(BOOL)a0;
- (void)setHasActiveNavigationTarget:(BOOL)a0;

@end
