@interface _NSWritingToolsManager : NSObject

+ (id)defaultManager;

- (void)showWritingTools:(id)a0;
- (id)targetForWritingToolsWithSender:(id)a0 targetType:(out int *)a1;
- (char)validateUserInterfaceItem:(id)a0;

@end
