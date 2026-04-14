@class NSString, NSUUID, NSMutableArray;
@protocol SHMatcher, SHMatcherDelegate;

@interface SHSignatureBatchMatcher : NSObject <SHParentMatcher, SHMatcherDelegate>

@property (retain) NSString *currentInstallationID;
@property (retain) NSUUID *currentRequestID;
@property (retain) NSMutableArray *pendingSignatures;
@property (retain) id<SHMatcher> childMatcher;
@property (weak) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stopRecognition;
- (id)initWithChildMatcher:(id)a0;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (void)processNextSignature;
- (void)startSignatureMatchRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;

@end
