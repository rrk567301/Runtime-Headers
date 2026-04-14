@class NSObject, ICQOffer, ICQPremiumOffer, ICQInAppMessage, RadiosPreferences, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ICQInAppMessaging : NSObject <RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> *_messageQueue;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) RadiosPreferences *radioPrefs;
@property (retain, nonatomic) ICQOffer *regularOffer;
@property (retain, nonatomic) ICQPremiumOffer *premiumOffer;
@property (retain, nonatomic) ICQOffer *defaultOffer;
@property (retain, nonatomic) ICQInAppMessage *mockMessage;
@property (retain, nonatomic) id reachabilityObserver;
@property (nonatomic, getter=isICloudReachable) BOOL iCloudReachable;
@property (retain, nonatomic) ICQInAppMessage *lastMessage;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)airplaneModeChanged;
- (void)observeUpdates;
- (void)stopObservingUpdates;
- (void)_fetchRegularOffer;
- (void)_fetchPremiumOffer;
- (void)_fetchDefaultOffer;
- (void)_fetchInitialOfferStates;
- (void)fetchMessageWithCompletion:(id /* block */)a0;
- (id)_getBundleIdentifier;
- (unsigned long long)_contentTypeForQuotaOffer:(id)a0;
- (id)_symbolNameForQuotaOffer:(id)a0;
- (id)_actionsForBannerSpecification:(id)a0 offer:(id)a1;
- (id)quotaMessageForOffer:(id)a0;
- (id)airplaneModeOnMessage;
- (id)serverUnreachableMessage;
- (id)_recalculateCurrentMessage;
- (void)_recalculateAndPostCurrentMessage;

@end
