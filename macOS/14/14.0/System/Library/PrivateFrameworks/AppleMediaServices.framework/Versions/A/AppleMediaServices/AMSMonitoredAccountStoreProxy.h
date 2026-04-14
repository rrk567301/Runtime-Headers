@class NSString;

@interface AMSMonitoredAccountStoreProxy : NSProxy

@property (copy, nonatomic) NSString *mediaType;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithMediaType:(id)a0;

@end
