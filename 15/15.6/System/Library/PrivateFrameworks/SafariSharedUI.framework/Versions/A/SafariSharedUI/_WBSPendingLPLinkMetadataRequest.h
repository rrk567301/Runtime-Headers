@class WBSSiteMetadataRequest;

@interface _WBSPendingLPLinkMetadataRequest : NSObject

@property (readonly, nonatomic) WBSSiteMetadataRequest *request;
@property (readonly, nonatomic) char allowDelayedResponse;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 allowDelayedResponse:(char)a1;

@end
