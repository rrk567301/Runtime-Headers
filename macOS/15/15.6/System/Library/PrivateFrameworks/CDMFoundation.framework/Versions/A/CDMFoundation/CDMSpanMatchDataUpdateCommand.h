@class SEMSpanMatcher;

@interface CDMSpanMatchDataUpdateCommand : CDMBaseCommand

@property (readonly, nonatomic) SEMSpanMatcher *semSpanMatcher;
@property (readonly, nonatomic) BOOL connectedToCarPlayUltra;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCarPlayUltraConnected:(BOOL)a0;

@end
