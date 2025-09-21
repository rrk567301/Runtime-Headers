@interface MSTimerGate : NSObject

@property (nonatomic) char enabled;

- (id)init;
- (void)disable;
- (void)enable;

@end
