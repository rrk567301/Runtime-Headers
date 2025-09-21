@class CNContactStore, NSString, NSSet, NSObject;
@protocol OS_os_log, CNUIUserActivityRestorerDelegate;

@interface CNUIUserActivityRestorer : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSString *activityTypeCreateContactIntent;
@property (readonly, nonatomic) NSString *activityTypeSpotlightQueryContinuation;
@property (readonly, nonatomic) NSString *activityTypeSpotlightSearchableItem;
@property (weak, nonatomic) id<CNUIUserActivityRestorerDelegate> delegate;
@property (readonly, nonatomic) NSSet *restorableActivityTypes;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (char)restoreSpotlightSearchableItem:(id)a0;
- (char)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)a0;
- (char)restoreCreateContactIntent:(id)a0;
- (char)restoreEditingContact:(id)a0;
- (char)restoreSpotlightQueryContinuation:(id)a0;
- (char)restoreUserActivity:(id)a0;
- (char)restoreViewingContact:(id)a0;
- (char)restoreViewingGroups:(id)a0;
- (char)restoreViewingList:(id)a0;

@end
