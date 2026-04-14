@class NSURL, IXTerminationAssertion;

@interface IXUnregisterOSModuleToken : NSObject

@property (copy, nonatomic) NSURL *moduleURL;
@property (retain, nonatomic) id options;
@property (retain, nonatomic) IXTerminationAssertion *terminationAssertion;
@property (readonly, nonatomic) BOOL isValid;

- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)acquireTerminationAssertionsWithError:(id *)a0;
- (id)initWithModuleURL:(id)a0 options:(id)a1;

@end
