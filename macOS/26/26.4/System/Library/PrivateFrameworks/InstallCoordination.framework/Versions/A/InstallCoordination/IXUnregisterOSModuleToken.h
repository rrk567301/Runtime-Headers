@class NSURL;
@protocol IXTerminationAssertionWrapperProtocol, IXApplicationRecordEnumeratorProtocol;

@interface IXUnregisterOSModuleToken : NSObject

@property (copy, nonatomic) NSURL *moduleURL;
@property (retain, nonatomic) id options;
@property (retain, nonatomic) id<IXTerminationAssertionWrapperProtocol> terminationAssertion;
@property (retain, nonatomic) id<IXApplicationRecordEnumeratorProtocol> applicationEnumerator;
@property (copy, nonatomic) id /* block */ terminationAssertionCreationBlock;
@property (readonly, nonatomic) BOOL isValid;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (BOOL)acquireTerminationAssertionsWithError:(id *)a0;
- (id)initWithModuleURL:(id)a0 options:(id)a1;
- (id)initWithModuleURL:(id)a0 options:(id)a1 applicationEnumerator:(id)a2 terminationAssertionCreationBlock:(id /* block */)a3;

@end
