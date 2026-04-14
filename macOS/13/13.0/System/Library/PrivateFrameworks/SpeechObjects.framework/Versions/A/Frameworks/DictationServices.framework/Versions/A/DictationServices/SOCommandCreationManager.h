@class NSMutableArray;
@protocol SOCommandCreationManagerDelegate;

@interface SOCommandCreationManager : NSObject

@property (readonly) NSMutableArray *activeEditors;
@property (nonatomic) id<SOCommandCreationManagerDelegate> delegate;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)startCreatingCommandForAppPID:(int)a0 nounSpecifiers:(id)a1;
- (void)finishedCreatingCommandWithWindowController:(id)a0;
- (void)cancelAllActiveEditors;

@end
