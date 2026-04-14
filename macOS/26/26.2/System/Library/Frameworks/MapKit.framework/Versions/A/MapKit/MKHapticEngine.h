@interface MKHapticEngine : NSObject

- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (id)init;
- (void)prepare;
- (void)playFailure;
- (void)playSuccess;

@end
