@class NSMutableDictionary;
@protocol EDActivityHookResponder;

@interface EDActivityPersistence : NSObject {
    NSMutableDictionary *_currentActivities;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_donatedActivities;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _donationLock;
}

@property (retain, nonatomic) id<EDActivityHookResponder> activityHookResponder;

- (id)currentActivities;
- (void).cxx_destruct;
- (void)activityWithID:(id)a0 finishedWithError:(id)a1;
- (void)activityWithID:(id)a0 setCompletedCount:(long long)a1 totalCount:(long long)a2;
- (void)activityWithID:(id)a0 setUserInfoObject:(id)a1 forKey:(id)a2;
- (id)convertToUserInfo:(id)a0;
- (void)donateSignalForActivity:(id)a0 error:(id)a1;
- (BOOL)donateSignalForActivityIfNeeded:(id)a0 previousActivity:(id)a1 error:(id)a2;
- (id)initWithHookResponder:(id)a0;
- (id)startActivityOfType:(long long)a0 userInfo:(id)a1;

@end
