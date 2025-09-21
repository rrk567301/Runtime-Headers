@class SEMSpanMatcher;

@interface CDMSpanMatchDataUpdateCommand : CDMBaseCommand

@property (readonly, nonatomic) SEMSpanMatcher *semSpanMatcher;
@property (readonly, nonatomic) char connectedToCarPlayUltra;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCarPlayUltraConnected:(char)a0;

@end
