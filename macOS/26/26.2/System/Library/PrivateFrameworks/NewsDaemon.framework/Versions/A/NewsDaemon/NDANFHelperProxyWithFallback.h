@class NDANFHelper, NDANFHelperProxy;

@interface NDANFHelperProxyWithFallback : NSObject <FCANFHelper>

@property (readonly, nonatomic) NDANFHelperProxy *proxyHelper;
@property (readonly, nonatomic) NDANFHelper *inProcessHelper;

- (void).cxx_destruct;
- (id)init;
- (id)manifestFromANFDocumentData:(id)a0;
- (void)popInterest;
- (void)pushInterest;

@end
