@interface MKHapticEngine : NSObject

- (void)draggedObjectLanded;
- (id)init;
- (void)prepare;
- (void)draggedObjectLifted;
- (void)playFailure;
- (void)playSuccess;

@end
