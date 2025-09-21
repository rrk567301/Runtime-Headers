@class NSDictionary, NSString, NSSet, NSFileHandle, SMNetworkDirectoryEnumerator_ServerSide, NSObject, IASInputStream;
@protocol OS_dispatch_semaphore;

@interface SMNPathingAction : SMNAction

@property (retain) NSString *startingPath;
@property (retain) NSSet *dontDescendPaths;
@property (retain) NSSet *additionalProperties;
@property (retain) NSFileHandle *networkDirectoryEnumeratorStream;
@property (retain) SMNetworkDirectoryEnumerator_ServerSide *dirEnumerator;
@property (retain) IASInputStream *inputStream;
@property (retain) NSObject<OS_dispatch_semaphore> *doneReadingResults;
@property char readResultSuccess;
@property (retain) NSString *compressionFormat;
@property char autoSizeBundles;
@property char autoDetectBundles;
@property char useTrueOnDiskSizes;
@property (retain) NSDictionary *restartPoint;
@property (copy, nonatomic) id /* block */ receiveDataBlock;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;
+ (char)streamsResults;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)requestPayload;
- (id)initWithStartingPath:(id)a0 dontDescendPaths:(id)a1 andRestartPoint:(id)a2;
- (void)readResults;
- (void)setReadResultsResult:(char)a0;
- (char)receiveResultOnFd:(int)a0 errorIsFatal:(char *)a1;
- (char)sendResultOnFd:(int)a0;
- (id)setOfClassesToDecodeInThePathingResultOnly;
- (void)stopPathing;

@end
