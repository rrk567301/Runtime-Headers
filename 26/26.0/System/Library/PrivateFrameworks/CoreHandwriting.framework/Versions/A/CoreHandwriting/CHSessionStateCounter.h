@interface CHSessionStateCounter : NSObject

@property (readonly, nonatomic) int counter;

- (void)decrement;
- (BOOL)hasActiveSessions;
- (id)init;
- (void)increment;

@end
