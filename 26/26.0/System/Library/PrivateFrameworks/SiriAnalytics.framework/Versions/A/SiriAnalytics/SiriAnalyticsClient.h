@class SiriAnalyticsClientMessageStream;

@interface SiriAnalyticsClient : NSObject

@property (readonly, nonatomic) SiriAnalyticsClientMessageStream *defaultMessageStream;

- (void)setDefaultMessageStream:(id)a0;
- (void).cxx_destruct;

@end
