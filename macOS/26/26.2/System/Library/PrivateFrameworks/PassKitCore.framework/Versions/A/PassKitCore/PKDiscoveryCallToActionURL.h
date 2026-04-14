@class NSURL;

@interface PKDiscoveryCallToActionURL : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) BOOL isSensitive;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 isSensitive:(BOOL)a1;

@end
