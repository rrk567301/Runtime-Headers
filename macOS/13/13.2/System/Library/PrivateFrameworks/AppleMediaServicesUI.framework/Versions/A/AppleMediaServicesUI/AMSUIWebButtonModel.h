@class AMSUIWebActivityIndicatorModel, NSString, NSDictionary, AMSUIWebAppViewModel;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface>

@property (retain) NSDictionary *underlyingJSObject;
@property (retain) NSString *accessibilityLabel;
@property (retain) id<AMSUIWebActionRunnable> action;
@property SEL actionSelector;
@property (retain) AMSUIWebActivityIndicatorModel *activityIndicator;
@property (retain) AMSUIWebAppViewModel *appView;
@property BOOL bold;
@property BOOL enabled;
@property (retain) NSString *keyEquivalent;
@property (retain) id target;
@property (retain) NSString *title;
@property long long style;
@property (retain) NSString *systemImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)initWithAppViewObject:(id)a0 context:(id)a1;
- (id)createBarButtonItemWithTarget:(id)a0 selector:(SEL)a1 navBar:(id)a2;
- (long long)_barButtonItemStyle;
- (id)_createAppViewItemWithModel:(id)a0;
- (id)_createSpinnerItem;
- (id)_createProxCardItemWithTarget:(id)a0 selector:(SEL)a1;
- (id)createDialogAction;
- (id)_imageForButtonWithNavStyle:(long long)a0;

@end
