@class NSDictionary, NSString, NSXPCConnection, SZExtractorInternalDelegate, StreamingUnzipper, NSObject, NSError;
@protocol OS_dispatch_queue, SZExtractorDelegate;

@interface SZExtractor : NSObject <SZExtractor, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long lastResumptionOffset;
@property (readonly, nonatomic) NSXPCConnection *unzipServiceConnection;
@property (readonly, nonatomic) StreamingUnzipper *inProcessUnzipper;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) SZExtractorInternalDelegate *internalExtractorDelegate;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) char isLocalExtractor;
@property (nonatomic) char needsPreparation;
@property (nonatomic) char hasHadPostSetupMethodsCalled;
@property (copy, nonatomic) NSString *extractionPath;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (nonatomic) char privileged;
@property (weak, nonatomic) id<SZExtractorDelegate> extractorDelegate;
@property (weak, nonatomic) id<SZExtractorDelegate> delegate;
@property (readonly, nonatomic) char doesConsumeExtractedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)knownSZExtractorImplementations;
+ (void)enableDebugLogging;
+ (int)servicePIDWithError:(id *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0;
- (id)initWithPath:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithPath:(id)a0 options:(id)a1;
- (char)doesConsumeExtractedData;
- (void)finishStreamWithCompletionBlock:(id /* block */)a0;
- (void)prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)supplyBytes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)suspendStreamWithCompletionBlock:(id /* block */)a0;
- (void)terminateStreamWithError:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)_serviceConnectionWithError:(id *)a0;
- (void)_invalidateObject;
- (char)_isValidObject;
- (void)_prepareForExtractionSynchronously:(char)a0 withCompletionBlock:(id /* block */)a1;
- (void)_prepareForLocalExtraction:(id /* block */)a0;
- (void)_prepareForRemoteExtractionSynchronously:(char)a0 withCompletionBlock:(id /* block */)a1;
- (char)_setUpWithPath:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_suspendStreamWithCompletionBlockSynchronously:(char)a0 completion:(id /* block */)a1;
- (char)_synchronouslyPrepareForExtractionAtOffset:(unsigned long long *)a0;
- (id)initForLocalExtractionWithPath:(id)a0 options:(id)a1 resumptionOffset:(unsigned long long *)a2;
- (id)initForRemoteExtractionWithPath:(id)a0 options:(id)a1 resumptionOffset:(unsigned long long *)a2;
- (id)initWithPath:(id)a0 md5Hashes:(id)a1 hashedChunkSize:(unsigned long long)a2 resumptionOffset:(unsigned long long *)a3;
- (id)initWithPath:(id)a0 options:(id)a1 resumptionOffset:(unsigned long long *)a2;
- (id)initWithPath:(id)a0 resumptionOffset:(unsigned long long *)a1;
- (void)prepareForExtraction:(id /* block */)a0;
- (void)setActiveExtractorDelegateMethods:(int)a0;

@end
