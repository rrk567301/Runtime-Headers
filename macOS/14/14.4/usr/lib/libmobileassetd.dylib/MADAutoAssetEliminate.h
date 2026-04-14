@class NSString, MADAutoAssetClientRequest, MAAutoAssetSelector, NSMutableDictionary;

@interface MADAutoAssetEliminate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MADAutoAssetClientRequest *clientRequest;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (nonatomic) BOOL eliminatingSet;
@property (nonatomic) BOOL awaitingUnlocked;
@property (nonatomic) BOOL awaitingSchedulerAck;
@property (nonatomic) BOOL awaitingCancelActivityAck;
@property (nonatomic) BOOL awaitingStagerAck;
@property (retain, nonatomic) NSMutableDictionary *activeJobsByUUID;
@property (nonatomic) BOOL limitedToCancelActivity;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithAssetSelector:(id)a0;
- (id)initWithClientRequest:(id)a0;
- (id)initWithClientRequest:(id)a0 withAssetSelector:(id)a1 forClientDomain:(id)a2 forSetIdentifier:(id)a3 awaitingUnlocked:(BOOL)a4;

@end
