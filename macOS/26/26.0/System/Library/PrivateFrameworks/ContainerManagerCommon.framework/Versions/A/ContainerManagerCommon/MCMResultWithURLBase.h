@class NSString, MCMError, NSURL, NSArray;

@interface MCMResultWithURLBase : MCMResultBase <MCMResultWithURL>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) const char *sandboxToken;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) NSArray *warnings;
@property (nonatomic, getter=isCacheable) BOOL cacheable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)encodeResultOntoReply:(id)a0;
- (void)dealloc;
- (id)initWithPath:(id)a0 existed:(BOOL)a1 sandboxToken:(const char *)a2;
- (id)initWithURL:(id)a0 existed:(BOOL)a1 sandboxToken:(const char *)a2;
- (void).cxx_destruct;

@end
