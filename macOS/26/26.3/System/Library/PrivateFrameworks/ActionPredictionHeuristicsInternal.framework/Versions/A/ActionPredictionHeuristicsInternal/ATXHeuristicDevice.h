@class CNContactStore, CNContact, ATXLocationManager, MTAlarmManager, NSDate, EKEventStore, NSMutableDictionary;

@interface ATXHeuristicDevice : NSObject {
    CNContactStore *_contactStoreLazy;
    CNContact *_meContactLazy;
    BOOL _meContactChecked;
    EKEventStore *_eventStore;
    NSDate *_now;
    NSMutableDictionary *_wrappedObjects;
}

@property (class, readonly, nonatomic) MTAlarmManager *sharedAlarmManager;

@property (readonly, nonatomic) ATXLocationManager *locationManager;
@property (readonly, nonatomic) NSDate *now;
@property (readonly, nonatomic) EKEventStore *eventStore;

- (void)setNow:(id)a0;
- (id)meContact;
- (void)updateMeContact;
- (id)contactStore;
- (id)_dictContactForIdentifier:(id)a0;
- (id)_dictContactForParticipant:(id)a0 contactCache:(id)a1;
- (id)_unwrap:(id)a0;
- (id)resolveContact:(id)a0;
- (id)_wrap:(id)a0;
- (id)organizerContactWithEvent:(id)a0;
- (id)init;
- (id)initWithLocationManager:(id)a0;
- (id)dictForEvent:(id)a0;
- (id)_dictForAttachment:(id)a0;
- (id)dictContactForCNContact:(id)a0;
- (id)wrap:(id)a0;
- (id)_calendarVisibilityManager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)contactForParticipant:(id)a0;
- (id)dictForEvent:(id)a0 contactCache:(id)a1;
- (id)_contactForPredicate:(id)a0;
- (id)_dictForEvent:(id)a0 contactCache:(id)a1;
- (id)_contactKeysToFetch;
- (id)visibleCalendarsRegardlessOfFocus;
- (id)contactsForPredicate:(id)a0;
- (id)visibleCalendarsInCurrentFocus;

@end
