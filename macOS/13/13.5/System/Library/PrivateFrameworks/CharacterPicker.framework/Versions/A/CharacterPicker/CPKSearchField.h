@class NSString;
@protocol CPKNavigationDelegate;

@interface CPKSearchField : NSSearchField <CPKNavigationSender>

@property (readonly, nonatomic) BOOL hasActiveNavigationTarget;
@property (readonly, nonatomic) id<CPKNavigationDelegate> navigationDelegate;
@property BOOL hasKeyFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (void)setStringValue:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setNavigationDelegate:(id)a0;
- (void)_changeHavingKeyFocus:(BOOL)a0;
- (void)setHasActiveNavigationTarget:(BOOL)a0;

@end
