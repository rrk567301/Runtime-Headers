@class NSString, NSURLSession;

@interface XARStonehengeRequest : NSObject {
    NSURLSession *_session;
    NSString *_apiKey;
    NSString *_apiSecret;
}

- (void).cxx_destruct;
- (id)init;

@end
