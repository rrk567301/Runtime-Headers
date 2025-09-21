@class NSURL, NSString, MCMError;

@interface MCMResultWithURLBase : MCMResultBase <MCMResultWithURL>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) const char *sandboxToken;
@property (readonly, nonatomic) char existed;
@property (readonly, nonatomic) MCMError *error;
@property (nonatomic, getter=isCacheable) char cacheable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (char)encodeResultOntoReply:(id)a0;
- (id)initWithPath:(id)a0 existed:(char)a1 sandboxToken:(const char *)a2;
- (id)initWithURL:(id)a0 existed:(char)a1 sandboxToken:(const char *)a2;

@end
