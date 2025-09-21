@class NSString, NSXPCConnection, SZExtractorInternalDelegate, NSError, NSObject, NSDictionary;
@protocol OS_dispatch_queue, SZExtractorDelegate;

@interface SZExtractor : NSObject <SZExtractor, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long lastResumptionOffset;
@property (readonly, nonatomic) NSXPCConnection *unzipServiceConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) SZExtractorInternalDelegate *internalExtractorDelegate;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL needsPreparation;
@property (nonatomic) BOOL hasHadPostSetupMethodsCalled;
@property (copy, nonatomic) NSString *extractionPath;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (nonatomic) BOOL privileged;
@property (weak, nonatomic) id<SZExtractorDelegate> extractorDelegate;
@property (weak, nonatomic) id<SZExtractorDelegate> delegate;
@property (readonly, nonatomic) BOOL doesConsumeExtractedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)knownSZExtractorImplementations;
+ (void)enableDebugLogging;
+ (int)servicePIDWithError:(id *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithPath:(id)a0 options:(id)a1;
- (BOOL)doesConsumeExtractedData;
- (void)finishStreamWithCompletionBlock:(id /* block */)a0;
- (void)prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)supplyBytes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)suspendStreamWithCompletionBlock:(id /* block */)a0;
- (void)terminateStreamWithError:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)_serviceConnectionWithError:(id *)a0;
- (void)_invalidateObject;
- (BOOL)_isValidObject;
- (void)_prepareForExtractionSynchronously:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (void)_prepareForRemoteExtractionSynchronously:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (BOOL)_setUpWithPath:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_suspendStreamWithCompletionBlockSynchronously:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_synchronouslyPrepareForExtractionAtOffset:(unsigned long long *)a0;
- (id)initForLocalExtractionWithPath:(id)a0 options:(id)a1 resumptionOffset:(unsigned long long *)a2;
- (id)initForRemoteExtractionWithPath:(id)a0 options:(id)a1 resumptionOffset:(unsigned long long *)a2;
- (id)initWithPath:(id)a0 md5Hashes:(id)a1 hashedChunkSize:(unsigned long long)a2 resumptionOffset:(unsigned long long *)a3;
- (id)initWithPath:(id)a0 options:(id)a1 resumptionOffset:(unsigned long long *)a2;
- (id)initWithPath:(id)a0 resumptionOffset:(unsigned long long *)a1;
- (void)prepareForExtraction:(id /* block */)a0;
- (void)setActiveExtractorDelegateMethods:(int)a0;

@end
