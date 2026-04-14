@protocol CNContactCardWidgetProviderDelegate;

@interface CNContactCardWidgetProviderDelegateWrapper : NSObject

@property (weak, nonatomic) id<CNContactCardWidgetProviderDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)widgetProvider:(id)a0 willCreateActionsViewController:(id)a1;
- (BOOL)widgetProvider:(id)a0 shouldIncludeSharingEnabledWarningViewController:(id)a1;

@end
