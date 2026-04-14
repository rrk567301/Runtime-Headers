@interface CHSessionStateCounter : NSObject

@property (readonly, nonatomic) int counter;

- (void)decrement;
- (BOOL)hasActiveSessions;
- (void)increment;
- (id)init;

@end
