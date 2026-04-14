@class NSString, NSArray, AMSUIWebButtonModel, AMSUIWebAppViewModel;

@interface AMSUIWebNavigationBarModel : NSObject <AMSUIWebModelInterface>

@property (retain) NSString *backButtonTitle;
@property (retain) NSString *backgroundColor;
@property long long backgroundStyle;
@property BOOL hidesBackButton;
@property (readonly) BOOL includesLeftItems;
@property (readonly) BOOL includesRightItems;
@property (retain) AMSUIWebAppViewModel *leftAppView;
@property (retain) AMSUIWebButtonModel *leftButton;
@property (retain) NSArray *leftButtons;
@property (retain) AMSUIWebAppViewModel *rightAppView;
@property (retain) AMSUIWebButtonModel *rightButton;
@property (retain) NSArray *rightButtons;
@property long long style;
@property (retain) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)imageForButtonModel:(id)a0;

@end
