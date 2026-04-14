@class SRFTextRequest;

@interface SiriUITextRequestInfo : NSObject

@property (retain, nonatomic) SRFTextRequest *textRequest;
@property (nonatomic) long long requestSource;

- (void).cxx_destruct;
- (id)initWithTextRequest:(id)a0 source:(long long)a1;

@end
