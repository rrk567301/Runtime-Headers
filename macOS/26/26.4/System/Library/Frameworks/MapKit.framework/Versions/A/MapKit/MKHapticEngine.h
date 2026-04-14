@interface MKHapticEngine : NSObject

- (void)prepare;
- (void)draggedObjectLanded;
- (id)init;
- (void)draggedObjectLifted;
- (void)playFailure;
- (void)playSuccess;

@end
