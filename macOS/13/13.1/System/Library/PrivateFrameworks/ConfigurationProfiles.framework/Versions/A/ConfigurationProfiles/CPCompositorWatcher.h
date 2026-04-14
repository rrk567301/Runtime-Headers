@class NSString, NSArray, NSMutableArray;

@interface CPCompositorWatcher : NSObject {
    NSString *mProfileUUID;
    NSArray *mUIDs;
    NSMutableArray *mRemainingUIDs;
    BOOL mDone;
}

- (void)dealloc;
- (BOOL)isDone;
- (void)notificationReceived:(id)a0;
- (id)initForProfile:(id)a0;
- (id)getUIDs;
- (void)setUIDs:(id)a0;
- (id)gatherLoggedInUserUIDs;
- (id)getProfileUUID;

@end
