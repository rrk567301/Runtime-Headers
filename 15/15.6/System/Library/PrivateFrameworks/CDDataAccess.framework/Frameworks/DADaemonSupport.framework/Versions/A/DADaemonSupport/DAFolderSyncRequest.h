@class DAFolder, NSArray;

@interface DAFolderSyncRequest : NSObject

@property (retain, nonatomic) DAFolder *folder;
@property (nonatomic) char hasRemoteChanges;
@property (nonatomic) char isInitialUberSync;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) char isResyncAfterConnectionFailed;
@property (nonatomic) char isResyncAfterServerError;
@property (nonatomic) char containsPostponedActions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFolder:(id)a0 hasRemoteChanges:(char)a1 isInitialUberSync:(char)a2;

@end
