@class LPLinkMetadata;

@interface WBSLPLinkMetadataResponse : WBSSiteMetadataResponse

@property (readonly, copy, nonatomic) LPLinkMetadata *metadata;
@property (readonly, nonatomic) BOOL canAttemptFetchNow;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 metadata:(id)a1 canAttemptFetchNow:(BOOL)a2;

@end
