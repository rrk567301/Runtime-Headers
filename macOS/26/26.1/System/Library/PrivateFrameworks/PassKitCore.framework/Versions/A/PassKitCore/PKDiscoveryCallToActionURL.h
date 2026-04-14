@class NSURL;

@interface PKDiscoveryCallToActionURL : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) BOOL isSensitive;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 isSensitive:(BOOL)a1;

@end
