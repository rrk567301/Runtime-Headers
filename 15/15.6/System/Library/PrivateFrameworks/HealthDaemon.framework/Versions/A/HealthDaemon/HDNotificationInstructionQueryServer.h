@interface HDNotificationInstructionQueryServer : HDQueryServer

+ (Class)queryClass;

- (void)_queue_start;
- (char)_shouldExecuteWhenProtectedDataIsUnavailable;

@end
