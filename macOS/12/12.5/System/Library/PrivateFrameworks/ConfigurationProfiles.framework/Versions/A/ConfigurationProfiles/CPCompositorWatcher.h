@class NSString, NSArray, NSMutableArray;

@interface CPCompositorWatcher : NSObject {
    NSString *mProfileUUID;
    NSArray *mUIDs;
    NSMutableArray *mRemainingUIDs;
    BOOL mDone;
}

- (void)dealloc;
- (BOOL)isDone;
- (id)initForProfile:(id)a0;
- (id)gatherLoggedInUserUIDs;
- (void)setUIDs:(id)a0;
- (id)getProfileUUID;
- (id)getUIDs;
- (void)notificationReceived:(id)a0;

@end
