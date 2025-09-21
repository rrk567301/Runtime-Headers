@class NSString, HMMTRSystemCommissionerPairingManager;

@interface HMDMTSNetworkCredentialServer : HMFObject <HMFLogging, MTSNetworkCredentialServerInterface>

@property (readonly, nonatomic) HMMTRSystemCommissionerPairingManager *systemCommissionerPairingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
