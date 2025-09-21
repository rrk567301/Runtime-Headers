@class NSString, CKContainer, NSDictionary, CKSchedulerActivity, NSMutableArray, BGSystemTask, CKXPCActivity, NSNumber, CKAssetDownloadStagingManager;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying> {
    char _hasContainer;
    char _hasAllowsCellularAccess;
    char _hasLongLived;
    char _hasTimeoutIntervalForRequest;
    char _hasTimeoutIntervalForResource;
    char _hasCKXPCActivity;
    char _hasXPCActivityAutomaticallyDefer;
    char _hasSchedulerActivity;
    char _hasSystemTask;
    char _hasDiscretionarySchedulingForEntireOperation;
    char _hasPreferAnonymousRequests;
    char _hasSourceApplicationBundleIdentifier;
    char _hasSourceApplicationSecondaryIdentifier;
    char _hasPrivacyProxyFailClosedOverride;
    char _hasApplicationBundleIdentifierOverrideForContainerAccess;
    char _hasApplicationBundleIdentifierOverrideForNetworkAttribution;
    char _hasAdditionalRequestHTTPHeaders;
    char _hasIsCloudKitSupportOperation;
    char _hasCacheDeleteAvailableSpaceClass;
    char _hasAssetDownloadStagingManager;
    char _hasRequestOriginator;
}

@property (class, readonly, copy, nonatomic) CKOperationConfiguration *defaultConvenienceOperationConfiguration;
@property (class, readonly) char supportsSecureCoding;

@property char hasQualityOfService;
@property char hasAllowsExpensiveNetworkAccess;
@property char hasAutomaticallyRetryNetworkFailures;
@property char hasDiscretionaryNetworkBehavior;
@property (readonly, copy) NSDictionary *unitTestOverrides;
@property (readonly, copy) NSMutableArray *mTestErrorInducerBoxes;
@property (readonly, copy) NSMutableArray *mTestResultOverlayBoxes;
@property (copy, setter=setCKXPCActivity:) CKXPCActivity *ckXPCActivity;
@property char xpcActivityAutomaticallyDefer;
@property char discretionarySchedulingForEntireOperation;
@property (nonatomic) unsigned long long requestOriginator;
@property (copy) NSString *_sourceApplicationSecondaryIdentifier;
@property (copy) NSNumber *privacyProxyFailClosedOverride;
@property char allowsExpensiveNetworkAccess;
@property char automaticallyRetryNetworkFailures;
@property (retain, nonatomic) BGSystemTask *systemTask;
@property (copy) CKSchedulerActivity *schedulerActivity;
@property unsigned long long discretionaryNetworkBehavior;
@property char preferAnonymousRequests;
@property (copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (copy) NSString *sourceApplicationSecondaryIdentifier;
@property (copy) NSDictionary *additionalRequestHTTPHeaders;
@property char isCloudKitSupportOperation;
@property (copy) NSNumber *cacheDeleteAvailableSpaceClass;
@property (copy) CKAssetDownloadStagingManager *assetDownloadStagingManager;
@property (retain) CKContainer *container;
@property long long qualityOfService;
@property char allowsCellularAccess;
@property (getter=isLongLived) char longLived;
@property double timeoutIntervalForRequest;
@property double timeoutIntervalForResource;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)setXpcActivity:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (void)setXPCActivity:(id)a0;
- (void)addTestErrorInducerBox:(id)a0;
- (void)addTestResultOverlayBox:(id)a0;
- (void)addUnitTestOverrides:(id)a0;
- (char)hasXPCActivity;
- (void)removeTestErrorInducerBoxWithID:(id)a0;
- (void)removeTestResultOverlayBoxWithID:(id)a0;
- (void)removeUnitTestOverride:(id)a0;
- (id)resolveAgainstGenericConfiguration:(id)a0;
- (void)setApplicationBundleIdentifierOverride:(id)a0;
- (id)testErrorInducerBoxes;
- (id)testResultOverlayBoxes;

@end
