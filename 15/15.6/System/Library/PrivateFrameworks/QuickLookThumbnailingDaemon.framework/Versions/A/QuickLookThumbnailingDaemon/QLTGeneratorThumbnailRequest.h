@class NSError, FPItem, QLPreviewThumbnailGenerator, NSURL, QLThumbnailGenerationRequest, NSString, NSSet, QLDiskStore, NSObject, NSNumber;
@protocol OS_dispatch_group, QLIncrementalThumbnailGenerationHandler, OS_os_activity;

@interface QLTGeneratorThumbnailRequest : NSObject

@property (retain, nonatomic) NSNumber *requestBadgeType;
@property (nonatomic) unsigned long long handledRequestedTypes;
@property (nonatomic) unsigned long long successfullyHandldedRequestedTypes;
@property char cancelled;
@property (retain) QLDiskStore *diskStore;
@property (readonly, nonatomic) QLThumbnailGenerationRequest *request;
@property (retain, nonatomic) QLPreviewThumbnailGenerator *generator;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *batchDispatchGroup;
@property (retain, nonatomic) NSError *generationError;
@property (readonly, nonatomic) id<QLIncrementalThumbnailGenerationHandler> generationHandler;
@property (readonly, nonatomic) unsigned long long unhandledRequestedTypes;
@property char didCheckCache;
@property (readonly, nonatomic) unsigned long long badgeType;
@property (readonly) char cacheEnabled;
@property (retain) NSObject<OS_os_activity> *topActivity;
@property (retain) NSObject<OS_os_activity> *activity;
@property (retain) NSURL *taggedLogicalURL;
@property (retain) FPItem *item;
@property char isUbiquitousKnown;
@property char isDownloadedKnown;
@property char isUbiquitous;
@property char isDownloaded;
@property (retain) NSString *clientApplicationIdentifier;
@property (copy, nonatomic) NSSet *allowedTypesForGeneration;
@property long long extensionMatchingType;
@property (copy) id /* block */ downloadCompletionHandler;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)cancel;
- (void)_adjustRequestInformationIfNeeded;
- (unsigned long long)_requestedTypesForRepresentationType:(long long)a0;
- (void)addTypeToHandledTypes:(long long)a0;
- (void)addTypeToSuccessfullyHandledTypes:(long long)a0;
- (void)computeUbiquitousnessWithCompletionHandler:(id /* block */)a0;
- (void)fetchFPItemWithCompletionHandler:(id /* block */)a0;
- (void)fetchURLWithCompletionHandler:(id /* block */)a0;
- (char)hasHandledAllRequestedTypesOrMostRepresentativeType;
- (id)initWithRequest:(id)a0 generationHandler:(id)a1;
- (char)needsLowQualityThumbnailGeneration;
- (char)shouldGenerateLowQualityThumbnailOnCacheMiss;

@end
