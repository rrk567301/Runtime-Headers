@class SVXSession;

@interface SVXSessionIdleAssertion : NSObject

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) SVXSession *session;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTimestamp:(unsigned long long)a0 session:(id)a1;

@end
