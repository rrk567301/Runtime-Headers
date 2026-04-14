@class NSMutableArray;
@protocol SOCommandCreationManagerDelegate;

@interface SOCommandCreationManager : NSObject

@property (readonly) NSMutableArray *activeEditors;
@property (nonatomic) id<SOCommandCreationManagerDelegate> delegate;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)cancelAllActiveEditors;
- (void)finishedCreatingCommandWithWindowController:(id)a0;
- (void)startCreatingCommandForAppPID:(int)a0 nounSpecifiers:(id)a1;

@end
