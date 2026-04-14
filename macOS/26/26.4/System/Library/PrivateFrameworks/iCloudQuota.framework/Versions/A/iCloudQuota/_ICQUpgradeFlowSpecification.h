@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification {
    NSDictionary *_serverDict;
}

@property (nonatomic) long long offerType;
@property (nonatomic) BOOL needsWiFi;
@property (readonly, nonatomic) NSDictionary *serverDict;

+ (id)sanitizedUpgradeFlowServerDict:(id)a0;
+ (id)_upgradePageIdentifierForError:(id)a0;

- (id)upgradePageForSuccess:(BOOL)a0;
- (id)upgradeSuccessPage;
- (id)upgradePageForError:(id)a0;
- (id)upgradeSuccessPageForWiFi;
- (void).cxx_destruct;
- (id)upgradeFailurePage;
- (id)upgradeFailurePageForNetwork;
- (id)initWithServerDictionary:(id)a0;

@end
