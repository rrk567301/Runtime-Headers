@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification {
    NSDictionary *_serverDict;
}

@property (nonatomic) long long offerType;
@property (nonatomic) BOOL needsWiFi;
@property (readonly, nonatomic) NSDictionary *serverDict;

+ (id)_upgradePageIdentifierForError:(id)a0;
+ (id)sanitizedUpgradeFlowServerDict:(id)a0;

- (id)upgradeSuccessPage;
- (id)initWithServerDictionary:(id)a0;
- (id)upgradeFailurePage;
- (void).cxx_destruct;
- (id)upgradePageForSuccess:(BOOL)a0;
- (id)upgradeFailurePageForNetwork;
- (id)upgradeSuccessPageForWiFi;
- (id)upgradePageForError:(id)a0;

@end
