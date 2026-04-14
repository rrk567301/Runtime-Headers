@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SPPowerAssertion : NSObject

@property (copy, nonatomic) NSString *reason;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int powerAssertionId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)hold;
- (id)initWithReason:(id)a0 type:(unsigned long long)a1 timeout:(double)a2;
- (id)assertionType;
- (id)assertionName;
- (id)powerAssertionOption;
- (void)drop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_drop;

@end
