@class NSDictionary, NSString, AMSUIWebActivityIndicatorModel;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface>

@property (retain) NSDictionary *underlyingJSObject;
@property (retain) NSString *accessibilityLabel;
@property (retain) id<AMSUIWebActionRunnable> action;
@property (copy) id /* block */ actionBlock;
@property (retain) AMSUIWebActivityIndicatorModel *activityIndicator;
@property BOOL bold;
@property BOOL enabled;
@property (retain) NSString *keyEquivalent;
@property (retain) NSString *title;
@property long long style;
@property (retain) NSString *systemImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)_barButtonItemStyle;
- (id)_createProxCardItemWithActionBlock:(id /* block */)a0;
- (id)_createSpinnerItem;
- (id)_imageForButtonWithNavStyle:(long long)a0;
- (id)createBarButtonItemWithNavigationBarModel:(id)a0 actionBlock:(id /* block */)a1;
- (id)createDialogAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
