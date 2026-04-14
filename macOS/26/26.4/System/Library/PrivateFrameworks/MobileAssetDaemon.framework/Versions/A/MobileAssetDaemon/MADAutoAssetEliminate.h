@class NSString, MADAutoAssetClientRequest, MAAutoAssetSelector, NSMutableDictionary, NSMutableArray;

@interface MADAutoAssetEliminate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MADAutoAssetClientRequest *clientRequest;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (nonatomic) BOOL eliminatingSet;
@property (retain, nonatomic) NSMutableArray *downloadedSetDescriptors;
@property (nonatomic) BOOL awaitingUnlocked;
@property (nonatomic) BOOL awaitingSchedulerAck;
@property (nonatomic) BOOL awaitingCancelActivityAck;
@property (nonatomic) BOOL awaitingStagerAck;
@property (nonatomic) int awaitingSecureOperations;
@property (retain, nonatomic) NSMutableDictionary *activeJobsByUUID;
@property (nonatomic) BOOL limitedToCancelActivity;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetSelector:(id)a0;
- (id)initWithClientRequest:(id)a0;
- (id)initWithClientRequest:(id)a0 withAssetSelector:(id)a1 forClientDomain:(id)a2 forSetIdentifier:(id)a3 withDownloadedSetDescriptors:(id)a4 awaitingUnlocked:(BOOL)a5;

@end
