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
@property BOOL readResultSuccess;
@property (retain) NSString *compressionFormat;
@property BOOL autoSizeBundles;
@property BOOL autoDetectBundles;
@property BOOL useTrueOnDiskSizes;
@property (retain) NSDictionary *restartPoint;
@property (copy, nonatomic) id /* block */ receiveDataBlock;

+ (int)actionID;
+ (BOOL)streamsResults;
+ (id)actionWithPayload:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)requestPayload;
- (id)initWithStartingPath:(id)a0 dontDescendPaths:(id)a1 andRestartPoint:(id)a2;
- (void)readResults;
- (void)setReadResultsResult:(BOOL)a0;
- (BOOL)receiveResultOnFd:(int)a0 errorIsFatal:(BOOL *)a1;
- (BOOL)sendResultOnFd:(int)a0;
- (void)stopPathing;
- (id)setOfClassesToDecodeInThePathingResultOnly;

@end
