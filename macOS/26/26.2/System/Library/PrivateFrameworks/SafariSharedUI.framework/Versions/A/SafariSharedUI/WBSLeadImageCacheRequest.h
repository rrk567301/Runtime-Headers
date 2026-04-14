@interface WBSLeadImageCacheRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) BOOL allowDownloading;
@property (readonly, nonatomic) BOOL allowRetries;

+ (id)requestWithURL:(id)a0;

- (id)initWithURL:(id)a0 allowDownloading:(BOOL)a1 allowRetries:(BOOL)a2;
- (id)initWithURL:(id)a0 allowDownloading:(BOOL)a1;

@end
