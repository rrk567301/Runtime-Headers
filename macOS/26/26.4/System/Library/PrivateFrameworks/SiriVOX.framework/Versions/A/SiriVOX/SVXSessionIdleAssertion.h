@class SVXSessionIdleTimer;

@interface SVXSessionIdleAssertion : NSObject

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) SVXSessionIdleTimer *sessionTimer;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTimestamp:(unsigned long long)a0 sessionTimer:(id)a1;

@end
