@class ICQUpgradeFlowManager, NSString, ICQOffer, NSURL, ICQLink;

@interface ICQLinkInAppAction : ICQInAppAction <ICQUpgradeFlowManagerDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ICQLink *link;
@property (retain, nonatomic) ICQOffer *offer;
@property (retain, nonatomic) ICQUpgradeFlowManager *flowManager;
@property (retain, nonatomic) NSURL *linkURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)performActionWithContext:(id)a0;
- (id)initWithLink:(id)a0;
- (void)_launchFlowManagerWithContext:(id)a0;
- (id)_linkURLWithContext:(id)a0;
- (void)_performOverrideUploadOnCellularConstraints;
- (void)addAlertFromLink:(id)a0 offer:(id)a1;
- (id)initWithLink:(id)a0 inOffer:(id)a1;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;

@end
