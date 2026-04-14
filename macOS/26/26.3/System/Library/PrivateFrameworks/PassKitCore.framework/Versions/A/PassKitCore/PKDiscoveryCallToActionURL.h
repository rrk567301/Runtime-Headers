@class NSURL;

@interface PKDiscoveryCallToActionURL : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) BOOL isSensitive;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 isSensitive:(BOOL)a1;

@end
