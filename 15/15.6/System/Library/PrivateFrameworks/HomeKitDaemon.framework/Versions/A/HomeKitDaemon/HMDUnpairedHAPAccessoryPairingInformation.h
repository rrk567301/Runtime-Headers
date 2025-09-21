@class HMFTimer, NSString, NSUUID, NSData, HAPAccessoryPairingRequest, HMFActivity;

@interface HMDUnpairedHAPAccessoryPairingInformation : HMFObject

@property (nonatomic) long long linkType;
@property (retain, nonatomic) HMFTimer *pairingInterruptionTimer;
@property (copy, nonatomic) id /* block */ addAccessoryCompletionHandler;
@property (copy, nonatomic) id /* block */ addAccessoryProgressHandler;
@property (copy, nonatomic) id /* block */ setupCodeProviderCompletionHandler;
@property (retain, nonatomic) HMFTimer *pairingRetryTimer;
@property (retain, nonatomic) HMFTimer *reconfirmTimer;
@property (nonatomic) char allowAddUnauthenticatedAccessory;
@property (nonatomic) char provideNetworkCredentialsToAccessory;
@property (nonatomic) char setupCodeProvided;
@property (weak, nonatomic) HMFActivity *pairingActivity;
@property (readonly, nonatomic) HAPAccessoryPairingRequest *pairingRequest;
@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (copy) NSUUID *homeUUID;
@property (retain, nonatomic) NSString *accessoryServerIdentifier;
@property (retain, nonatomic) NSString *setupCode;
@property (retain, nonatomic) NSString *setupID;
@property (retain, nonatomic) NSUUID *setupAuthTokenUUID;
@property (retain, nonatomic) NSData *setupAuthToken;
@property (nonatomic) char wacAccessory;
@property (nonatomic) char legacyWAC;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAccessoryDescription:(id)a0 linkType:(long long)a1 completionHandler:(id /* block */)a2 progressHandler:(id /* block */)a3 pairingRequest:(id)a4;
- (id)initWithAccessoryUUID:(id)a0 accessoryName:(id)a1 linkType:(long long)a2 setupCode:(id)a3 completionHandler:(id /* block */)a4 setupCodeProvider:(id /* block */)a5 pairingRequest:(id)a6;
- (char)matchesAccessoryServer:(id)a0;
- (char)matchesUnpairedAccessory:(id)a0;

@end
