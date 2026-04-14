@interface MKHapticEngine : NSObject

- (id)init;
- (void)prepare;
- (void)playSuccess;
- (void)playFailure;
- (void)draggedObjectLifted;
- (void)draggedObjectLanded;

@end
