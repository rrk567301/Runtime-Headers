@class NSMutableSet;
@protocol FormTextStatusWatcherDelegate;

@interface FormTextStatusWatcher : NSObject {
    NSMutableSet *_unverifiedTabs;
}

@property (readonly, weak, nonatomic) id<FormTextStatusWatcherDelegate> delegate;
@property (readonly, nonatomic) unsigned long long unverifiedTabCount;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_tabWasVerified:(id)a0;
- (void)startWatchingAllUnverifiedTabsForWindowController:(id)a0;
- (void)startWatchingTabIfUnverified:(id)a0;
- (void)stopWatchingTab:(id)a0;

@end
