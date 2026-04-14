@interface CHSessionStateCounter : NSObject

@property (readonly, nonatomic) int counter;

- (void)decrement;
- (id)init;
- (BOOL)hasActiveSessions;
- (void)increment;

@end
