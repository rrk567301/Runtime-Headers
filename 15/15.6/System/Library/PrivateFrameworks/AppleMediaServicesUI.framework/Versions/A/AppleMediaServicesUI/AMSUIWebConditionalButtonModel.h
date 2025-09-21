@class AMSUIWebButtonModel, NSString;

@interface AMSUIWebConditionalButtonModel : NSObject <AMSUIWebModelInterface>

@property (retain) AMSUIWebButtonModel *button;
@property char hideOnModal;
@property char hideOnPush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
