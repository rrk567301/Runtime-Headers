@interface CHSessionStateCounter : NSObject

@property (readonly, nonatomic) int counter;

- (void)increment;
- (void)decrement;
- (BOOL)hasActiveSessions;
- (id)init;

@end
