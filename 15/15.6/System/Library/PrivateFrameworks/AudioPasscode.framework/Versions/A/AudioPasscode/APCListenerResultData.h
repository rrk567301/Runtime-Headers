@interface APCListenerResultData : NSObject

@property (nonatomic) unsigned long long completionTime;

- (char)isValid;
- (void)reset;
- (id)initWithPasscodeDurationNSec:(unsigned long long)a0;

@end
