@class CKOperationCallbackProxyEndpoint, NSString, CKDOperation, CKOperationConfiguration, CKOperationGroup, NSDictionary, CKOperationMMCSRequestOptions, NSNumber;

@interface CKOperationInfo : NSObject <NSSecureCoding, NSCopying> {
    unsigned int _clientSDKVersion;
    NSString *_name;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *operationID;
@property (nonatomic) char isOutstandingOperation;
@property (copy, nonatomic) NSString *ckOperationClassName;
@property (copy, nonatomic) CKOperationCallbackProxyEndpoint *callbackProxyEndpoint;
@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (retain, nonatomic) CKOperationGroup *group;
@property (retain, nonatomic) CKOperationConfiguration *resolvedConfiguration;
@property (nonatomic) char clientHasValidatedEntitlements;
@property (weak, nonatomic) CKDOperation *parentOperation;
@property (nonatomic) unsigned long long requestOriginator;
@property (readonly, nonatomic) char isLongLived;
@property (readonly, nonatomic) char allowsCellularAccess;
@property (readonly, nonatomic) char allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) NSNumber *privacyProxyFailClosedOverride;
@property (readonly, nonatomic) char automaticallyRetryNetworkFailures;
@property (readonly, nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (readonly, nonatomic) char preferAnonymousRequests;
@property (readonly, nonatomic) double timeoutIntervalForRequest;
@property (readonly, nonatomic) double timeoutIntervalForResource;
@property (readonly, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (readonly, nonatomic) char isCloudKitSupportOperation;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property (nonatomic) char usesAssetDownloadStagingManager;
@property (nonatomic) char wantsRequestStatistics;
@property (nonatomic) long long clientQueuePriority;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (nonatomic) unsigned long long discretionaryWhenBackgroundedState;
@property (nonatomic) unsigned long long systemScheduler;
@property (copy, nonatomic) NSString *xpcActivityIdentifier;
@property (nonatomic) char wantsDaemonOperationCallbacks;
@property (nonatomic) char wantsDaemonRequestCallbacks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDatabaseScope:(long long)a0;
- (void)takeValuesFrom:(id)a0;
- (void)takeValuesFromParentOperationInfo:(id)a0;

@end
