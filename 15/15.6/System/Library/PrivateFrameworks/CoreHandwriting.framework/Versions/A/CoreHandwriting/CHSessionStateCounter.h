@interface CHSessionStateCounter : NSObject

@property (readonly, nonatomic) int counter;

- (id)init;
- (void)decrement;
- (void)increment;
- (char)hasActiveSessions;

@end
