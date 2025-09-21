@interface _NSWritingToolsManager : NSObject

+ (id)defaultManager;

- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)showWritingTools:(id)a0;
- (id)targetForWritingToolsWithSender:(id)a0 targetType:(out int *)a1;

@end
