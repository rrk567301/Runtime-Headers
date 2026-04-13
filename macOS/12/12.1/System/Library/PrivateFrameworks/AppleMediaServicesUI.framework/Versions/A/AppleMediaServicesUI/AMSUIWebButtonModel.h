@class NSDictionary, AMSUIWebActivityIndicatorModel, NSString;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface>

@property (retain) NSDictionary *underlyingJSObject;
@property (retain) id<AMSUIWebActionRunnable> action;
@property SEL actionSelector;
@property (retain) AMSUIWebActivityIndicatorModel *activityIndicator;
@property BOOL bold;
@property BOOL enabled;
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
- (id)createDialogAction;

@end
