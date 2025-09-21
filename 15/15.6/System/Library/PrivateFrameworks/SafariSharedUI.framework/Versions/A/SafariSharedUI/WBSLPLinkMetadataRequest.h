@interface WBSLPLinkMetadataRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) char allowFetching;

- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 allowFetching:(char)a1;

@end
