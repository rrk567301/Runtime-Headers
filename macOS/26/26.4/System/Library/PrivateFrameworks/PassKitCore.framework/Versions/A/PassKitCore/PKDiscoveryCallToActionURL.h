@class NSURL;

@interface PKDiscoveryCallToActionURL : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) BOOL isSensitive;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 isSensitive:(BOOL)a1;

@end
