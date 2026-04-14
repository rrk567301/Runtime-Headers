@class NSString, ICQDynamicUIPresenter, ICQOffer, ICQUpgradeFlowOptions;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQUpgradeFlowManager : NSObject <ICQDynamicUIPresenterDelegate>

@property (retain, nonatomic) ICQDynamicUIPresenter *dynamicUIPresenter;
@property (readonly, nonatomic) ICQOffer *offer;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (weak, nonatomic) id<ICQUpgradeFlowManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dynamicUIPresenterDidCancel:(id)a0 error:(id)a1;
- (void)dynamicUIPresenterDidComplete:(id)a0;
- (id)initWithOffer:(id)a0;
- (void)beginRemoteFlow;
- (void)beginRemoteFlowWithParentWindow:(id)a0;
- (void)beginFlowWithPresentingViewController:(id)a0;
- (void)beginFlowWithWindow:(id)a0 isRemoteFlow:(BOOL)a1;
- (void)_presentDynamicUIWithWindow:(id)a0 isRemoteFlow:(BOOL)a1;
- (void)_beginRemoteFlowWithURL:(id)a0;
- (void)_sendDelegateCancel;
- (void)_sendDelegateComplete;

@end
