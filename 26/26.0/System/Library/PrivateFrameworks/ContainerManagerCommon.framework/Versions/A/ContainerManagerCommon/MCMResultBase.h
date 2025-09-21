@class NSArray, NSString, MCMError;

@interface MCMResultBase : NSObject <MCMResult_XPC, MCMResult>

@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) NSArray *warnings;
@property (nonatomic, getter=isCacheable) BOOL cacheable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_attachWarnings:(id)a0;
- (id)_encodeError:(id)a0;

@end
