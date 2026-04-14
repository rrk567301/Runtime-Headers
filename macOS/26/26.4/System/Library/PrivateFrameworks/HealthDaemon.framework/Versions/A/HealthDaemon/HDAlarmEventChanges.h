@class NSArray, NSSet;

@interface HDAlarmEventChanges : NSObject

@property (readonly, copy, nonatomic) NSArray *oldEvents;
@property (readonly, copy, nonatomic) NSArray *scheduledEvents;
@property (readonly, copy, nonatomic) NSSet *removedEvents;
@property (readonly, copy, nonatomic) NSSet *addedEvents;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithOldEvents:(id)a0 scheduledEvents:(id)a1;

@end
