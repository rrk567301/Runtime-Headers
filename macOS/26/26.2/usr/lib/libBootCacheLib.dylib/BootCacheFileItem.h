@class NSURL;

@interface BootCacheFileItem : BootCacheItem

@property (readonly) NSURL *url;
@property (readonly) long long fileSize;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithStore:(id)a0 key:(id)a1;

@end
