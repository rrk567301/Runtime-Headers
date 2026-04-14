@class NSString, SEMSpanMatcher;

@interface CDMSpanMatchDataUpdateCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) SEMSpanMatcher *semSpanMatcher;

- (void).cxx_destruct;
- (id)initWithUserId:(id)a0;

@end
