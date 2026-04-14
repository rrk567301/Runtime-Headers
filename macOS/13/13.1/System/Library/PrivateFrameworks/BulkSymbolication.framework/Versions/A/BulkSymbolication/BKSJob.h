@class NSArray, NSMutableDictionary, NSURLCredential, NSURLSessionDataTask, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BKSJob : NSObject

@property unsigned char state;
@property (readonly, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) NSURLSessionDataTask *dataTask;
@property (readonly, nonatomic) NSArray *symbolicationRequests;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, nonatomic) NSMutableDictionary *perUUIDSymbolicationRequests;
@property (retain, nonatomic) NSURLCredential *odCredential;
@property (nonatomic) BOOL needsSegmentInfo;
@property (readonly, nonatomic) BOOL shouldReadFromKeychain;
@property (copy, nonatomic) id /* block */ odCredentialProvidingBlock;
@property (readonly, nonatomic) double timeoutInSec;
@property (readonly, nonatomic) NSString *groupName;
@property (nonatomic) unsigned long long reachabilityTimeoutInSec;

+ (BOOL)symbolicationEndPointIsReachableWithTimeout:(unsigned long long)a0 errorOut:(id *)a1;
+ (id)_speedTracerProtectionSpace;

- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (void)addRequest:(id)a0;
- (id)initWithGroupName:(id)a0 timeoutInSec:(double)a1 shouldReadFromKeychain:(BOOL)a2 resultCollectionCompletionBlock:(id /* block */)a3;
- (void)addRequestForSymbolOwnerUUID:(id)a0 offsetIntoSymbolOwner:(unsigned long long)a1;
- (void)addRequestForSymbolOwnerUUID:(id)a0 segmentName:(id)a1 offsetIntoSegment:(unsigned long long)a2;
- (void)_invokeCompletionBlockWithResultCollection:(id)a0 error:(id)a1;
- (id)_uuidToSymbolOwnerDict:(id)a0;
- (id)_resultsForSymbolPayload:(id)a0 uuidToSymbolOwnerDict:(id)a1;
- (void)_processSymbolsPayload:(id)a0 uuidToSymbolOwnerDict:(id)a1 shouldSaveToKeychain:(BOOL)a2 hasCachedCredentials:(BOOL)a3;
- (void)_generateResultsUsingInitialResponsePayloadDict:(id)a0 shouldSaveToKeychain:(BOOL)a1 hasCachedCredentials:(BOOL)a2;
- (id)_handleResponseCorrectness:(id)a0 data:(id)a1 hasCachedCredentials:(BOOL)a2 error:(id)a3;
- (void)_handleFollowUpResponsePayload:(id)a0 UUIDToSymbolOwner:(id)a1 response:(id)a2 shouldSaveToKeychain:(BOOL)a3 hasCachedCredentials:(BOOL)a4 error:(id)a5;
- (void)_handleInitialResponsePayload:(id)a0 response:(id)a1 shouldSaveToKeychain:(BOOL)a2 hasCachedCredentials:(BOOL)a3 error:(id)a4;
- (id)_uuidInfoList;
- (id)_uuidToTEXTSegmentOffsetsList;
- (id)_uuidToTEXTSegmentOffsetListUsingSymbolOwners:(id)a0;
- (id)_initialQueryJSONObjectWithError:(id *)a0;
- (id)_queryJSONObjectWithSymbolOwners:(id)a0 error:(id *)a1;
- (id)_mutableRequestWithJSONData:(id)a0;
- (id)_newBoundaryString;
- (id)initWithGroupName:(id)a0 timeoutInSec:(double)a1 shouldReadFromKeychain:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)addRequestForSymbolOwnerUUID:(id)a0 offset:(unsigned long long)a1 isTextExec:(BOOL)a2;
- (void)addRequestCollection:(id)a0;

@end
