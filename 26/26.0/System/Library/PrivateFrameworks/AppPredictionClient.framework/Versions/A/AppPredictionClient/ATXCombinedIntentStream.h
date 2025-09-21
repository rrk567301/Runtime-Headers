@class ATXUserActivityStream, ATXMenuItemStream, ATXIntentStream, ATXToolKitActionStream;

@interface ATXCombinedIntentStream : NSObject {
    ATXIntentStream *_intentStream;
    ATXUserActivityStream *_activityStream;
    ATXMenuItemStream *_menuItemStream;
    ATXToolKitActionStream *_toolKitActionStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)getCombinedIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 ascending:(BOOL)a2;
- (id)getCombinedIntentEventsFromLastMonth;
- (id)getIntentEventForSourceItemID:(id)a0 forSource:(long long)a1;
- (id)getSortedCombinedIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 comparator:(id /* block */)a3;
- (id)getSortedCombinedIntentEventsForTestingActionsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)initWithIntentStream:(id)a0 activityStream:(id)a1;
- (id)initWithIntentStream:(id)a0 activityStream:(id)a1 menuItemStream:(id)a2 toolKitActionStream:(id)a3;

@end
