@class NSSet, NSString, NSURL, NSArray;

@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::ProcessPoolConfiguration> { struct type { unsigned char __lx[176]; } data; } _processPoolConfiguration;
}

@property (copy, nonatomic) NSURL *injectedBundleURL;
@property (copy, nonatomic) NSSet *customClassesForParameterCoder;
@property (nonatomic) unsigned long long maximumProcessCount;
@property (nonatomic) char usesSingleWebProcess;
@property (copy, nonatomic) NSString *customWebContentServiceBundleIdentifier;
@property (nonatomic) char ignoreSynchronousMessagingTimeoutsForTesting;
@property (nonatomic) char attrStyleEnabled;
@property (nonatomic) char shouldThrowExceptionForGlobalConstantRedeclaration;
@property (copy, nonatomic) NSArray *additionalReadAccessAllowedURLs;
@property (nonatomic) long long diskCacheSizeOverride;
@property (copy, nonatomic) NSArray *cachePartitionedURLSchemes;
@property (copy, nonatomic) NSArray *alwaysRevalidatedURLSchemes;
@property (nonatomic) char diskCacheSpeculativeValidationEnabled;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic) char shouldCaptureAudioInUIProcess;
@property (nonatomic) int presentingApplicationPID;
@property (nonatomic) struct { unsigned int x0[8]; } presentingApplicationProcessToken;
@property (nonatomic) char processSwapsOnNavigation;
@property (nonatomic) char alwaysKeepAndReuseSwappedProcesses;
@property (nonatomic) char processSwapsOnNavigationWithinSameNonHTTPFamilyProtocol;
@property (nonatomic) char prewarmsProcessesAutomatically;
@property (nonatomic) char usesWebProcessCache;
@property (nonatomic) char pageCacheEnabled;
@property (nonatomic, getter=isJITEnabled) char JITEnabled;
@property (nonatomic) char configureJSCForTesting;
@property (copy, nonatomic) NSString *timeZoneOverride;
@property (nonatomic) double memoryFootprintPollIntervalForTesting;
@property (copy, nonatomic) NSArray *memoryFootprintNotificationThresholds;
@property (nonatomic) char suspendsWebProcessesAggressivelyOnMemoryPressure;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
