@class CNCache, CNContactCardWidgetProviderDelegateWrapper;

@interface CNContactCardWidgetProvider : NSObject

@property (retain, nonatomic) CNContactCardWidgetProviderDelegateWrapper *safeDelegate;
@property (retain, nonatomic) CNCache *viewControllerCache;

+ (id)modeIdentifierForMode:(unsigned long long)a0 tabState:(unsigned long long)a1 allowsLikenessEditing:(BOOL)a2 isMe:(BOOL)a3;
+ (id)listOfWidgetClassesFromModeIdentifier;

- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)avatarViewController;
- (id)avatarNameCompositeController;
- (id)likenessPickerViewController;
- (id)nameViewController;
- (id)detailsViewController;
- (id)sharingEnabledWarningViewController;
- (id)editAuthorizationViewController;
- (id)controllerOfClass:(Class)a0;
- (void)tellDelegateWillCreateViewController:(id)a0;
- (BOOL)shouldIncludeViewController:(id)a0;
- (id)cardWidgetsFromWidgetClasses:(id)a0;
- (id)widgetsForContactCardViewMode:(unsigned long long)a0 isMe:(BOOL)a1;

@end
