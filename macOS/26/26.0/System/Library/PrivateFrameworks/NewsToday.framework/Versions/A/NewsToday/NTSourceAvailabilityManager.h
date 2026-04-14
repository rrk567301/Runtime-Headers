@class NSOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface NTSourceAvailabilityManager : NSObject

@property (copy, nonatomic) NSOrderedSet *availabilityEntriesInPreferredOrder;
@property (nonatomic) Class preferredSourceFetchDescriptorClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ preferredSourceChangedNotificationBlock;

- (id)initWithAvailabilityEntriesInPreferredOrder:(id)a0 queue:(id)a1;
- (id)init;
- (void)_recomputePreferredAvailableTodayResultsSource;
- (void)_setPreferredAvailableTodayResultsSource:(Class)a0;
- (void).cxx_destruct;

@end
