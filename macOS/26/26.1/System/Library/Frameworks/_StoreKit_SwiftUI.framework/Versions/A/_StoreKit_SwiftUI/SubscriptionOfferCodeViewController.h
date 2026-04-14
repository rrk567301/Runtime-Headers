@class NSString, NSDictionary;
@protocol SubscriptionOfferCodeViewControllerDelegate;

@interface SubscriptionOfferCodeViewController : NSViewController <HostingControllerDelegate> {
    NSDictionary *_parameters;
    BOOL _didShowOffer;
}

@property (weak, nonatomic) id<SubscriptionOfferCodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParameters:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)_displayOfferViewIfNecessary;
- (void)onDismiss;
- (void)showOfferUIWithParameters:(id)a0;

@end
