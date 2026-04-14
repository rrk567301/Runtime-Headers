@interface MKHapticEngine : NSObject

- (void)prepare;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (id)init;
- (void)playFailure;
- (void)playSuccess;

@end
