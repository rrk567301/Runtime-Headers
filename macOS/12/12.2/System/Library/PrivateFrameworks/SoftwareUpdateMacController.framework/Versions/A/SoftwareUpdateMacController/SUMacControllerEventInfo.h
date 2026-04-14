@class NSError, NSString, SUMacControllerDescriptor, SUCoreProgress, SUCoreDescriptor, NSDictionary, SUMacControllerAccessControlContext, SUMacControllerClientRequest, NSNumber, SUMacControllerOverrides;

@interface SUMacControllerEventInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *persistenceDescription;
@property (retain, nonatomic) SUMacControllerClientRequest *clientRequest;
@property (nonatomic) long long targetPhase;
@property (retain, nonatomic) SUCoreProgress *progress;
@property (retain, nonatomic) SUCoreDescriptor *reloadedDescriptor;
@property (retain, nonatomic) SUCoreDescriptor *locatedSFRUpdate;
@property (retain, nonatomic) NSString *bridgeOSDownloadDirectory;
@property (retain, nonatomic) NSString *rosettaDownloadDirectory;
@property (retain, nonatomic) NSString *eventToIssue;
@property (nonatomic) BOOL shouldPerformBridgeOSUpdate;
@property (retain, nonatomic) NSString *bridgeOSVersionToInstall;
@property (retain, nonatomic) NSNumber *bridgeOSDownloadSizeBytes;
@property (retain, nonatomic) NSNumber *bridgeOSExtractedSizeBytes;
@property (nonatomic) BOOL shouldPerformRosettaUpdate;
@property (retain, nonatomic) NSString *rosettaVersionToInstall;
@property (nonatomic) BOOL recoveryOSUpdateResult;
@property (nonatomic) BOOL recoveryOSUpdateRequired;
@property (retain, nonatomic) NSError *recoveryOSUpdateError;
@property (retain, nonatomic) NSDictionary *recoveryOSUpdateInfo;
@property (readonly, retain, nonatomic) id /* block */ queryStateCompletion;
@property (readonly, nonatomic) long long persistedReachedPhase;
@property (readonly, retain, nonatomic) NSString *persistedUpdateUUID;
@property (readonly, retain, nonatomic) SUMacControllerAccessControlContext *persistedAccessControlContext;
@property (readonly, retain, nonatomic) SUMacControllerDescriptor *persistedDescriptor;
@property (readonly, retain, nonatomic) SUMacControllerOverrides *persistedOverrides;
@property (retain, nonatomic) NSError *error;

+ (id)updatePhaseName:(long long)a0;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueryCompletion:(id /* block */)a0;
- (id)initWithReachedPhase:(long long)a0 updateUUID:(id)a1 accessControlContext:(id)a2 descriptor:(id)a3 overrides:(id)a4;

@end
