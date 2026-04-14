@class NSDate, NSMutableDictionary, CNContact, ATXLocationManager, CNContactStore, EKEventStore, MTAlarmManager, LNRelevantIntentProvider;

@interface ATXHeuristicDevice : NSObject {
    CNContactStore *_contactStoreLazy;
    CNContact *_meContactLazy;
    BOOL _meContactChecked;
    EKEventStore *_eventStore;
    LNRelevantIntentProvider *_relevantIntentProvider;
    NSDate *_now;
    NSMutableDictionary *_wrappedObjects;
}

@property (class, readonly, nonatomic) MTAlarmManager *sharedAlarmManager;

@property (readonly, nonatomic) ATXLocationManager *locationManager;
@property (readonly, nonatomic) NSDate *now;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) LNRelevantIntentProvider *relevantIntentProvider;

- (id)meContact;
- (id)contactStore;
- (id)wrap:(id)a0;
- (id)dictForEvent:(id)a0 contactCache:(id)a1;
- (void)setNow:(id)a0;
- (id)_dictForAttachment:(id)a0;
- (id)contactsForPredicate:(id)a0;
- (id)_calendarVisibilityManager;
- (id)dictContactForCNContact:(id)a0;
- (id)_contactForPredicate:(id)a0;
- (id)organizerContactWithEvent:(id)a0;
- (id)_wrap:(id)a0;
- (void)updateMeContact;
- (id)visibleCalendarsInCurrentFocus;
- (id)resolveContact:(id)a0;
- (void).cxx_destruct;
- (id)contactForParticipant:(id)a0;
- (id)_unwrap:(id)a0;
- (id)dictForEvent:(id)a0;
- (id)init;
- (id)visibleCalendarsRegardlessOfFocus;
- (id)_dictContactForParticipant:(id)a0 contactCache:(id)a1;
- (id)_dictForEvent:(id)a0 contactCache:(id)a1;
- (id)initWithLocationManager:(id)a0;
- (id)_contactKeysToFetch;
- (void)dealloc;
- (id)_dictContactForIdentifier:(id)a0;

@end
