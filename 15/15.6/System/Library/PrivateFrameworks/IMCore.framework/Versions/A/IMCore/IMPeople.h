@class NSArray, NSMutableArray;

@interface IMPeople : NSObject

@property (retain, nonatomic) NSMutableArray *people;
@property (nonatomic) long long coalesceCount;
@property (readonly, nonatomic) NSArray *groups;
@property (nonatomic, setter=setShouldHidePeople:) char hidePeople;
@property (readonly, nonatomic) char coalescingChanges;
@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (void).cxx_destruct;
- (char)removeIMHandle:(id)a0;
- (void)_addedPeople:(id)a0;
- (char)addIMHandle:(id)a0;
- (void)addNotificationObserver:(id)a0 selector:(SEL)a1;
- (char)addPeopleFromArray:(id)a0;
- (char)addPeopleFromArray:(id)a0 skipMe:(char)a1;
- (void)addedIMHandle:(id)a0;
- (void)beginCoalescedChanges;
- (char)containsIMHandle:(id)a0;
- (void)endCoalescedChanges;
- (void)imHandle:(id)a0 buddyStatusChanged:(char)a1;
- (void)removeNotificationObserver:(id)a0;
- (char)removePeopleFromArray:(id)a0;
- (void)removedIMHandle:(id)a0;

@end
