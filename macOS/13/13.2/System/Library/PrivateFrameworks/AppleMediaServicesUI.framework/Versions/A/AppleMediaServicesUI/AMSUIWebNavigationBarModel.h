@class AMSUIWebButtonModel, NSArray, NSString;

@interface AMSUIWebNavigationBarModel : NSObject <AMSUIWebModelInterface>

@property (retain) AMSUIWebButtonModel *accessoryButton;
@property (retain) NSArray *accessoryButtons;
@property (retain) NSString *backButtonTitle;
@property (retain) NSString *backgroundColor;
@property long long backgroundStyle;
@property BOOL hidesBackButton;
@property (readonly) BOOL includesLeftItems;
@property (readonly) BOOL includesRightItems;
@property (retain) AMSUIWebButtonModel *leftButton;
@property (retain) NSArray *leftButtons;
@property (retain) AMSUIWebButtonModel *otherButton;
@property (retain) NSArray *otherButtons;
@property (retain) AMSUIWebButtonModel *rightButton;
@property (retain) NSArray *rightButtons;
@property long long style;
@property (retain) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_buttonWithJSObject:(id)a0 context:(id)a1;
+ (id)_conditionalButtonsWithJSObject:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
