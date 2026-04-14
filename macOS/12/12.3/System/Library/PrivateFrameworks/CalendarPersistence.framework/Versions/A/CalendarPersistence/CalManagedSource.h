@interface CalManagedSource : CoreCalendarSource {
    int _status;
}

- (int)status;
- (id)initWithKey:(id)a0;
- (void)setStatus:(int)a0;
- (BOOL)modifyEntity:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)hasCalendarItemForSharedUID:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)addEntity:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)removeEntity:(id)a0 inManagedObjectContext:(id)a1;
- (id)calendarInManagedObjectContext:(id)a0;
- (id)entitiesMatchingSearchElement:(id)a0 inManagedObjectContext:(id)a1;
- (id)entityForLocalUID:(id)a0 inManagedObjectContext:(id)a1;
- (id)entityForSharedUID:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)addEntities:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)modifyEntities:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)removeEntities:(id)a0 inManagedObjectContext:(id)a1;
- (id)eventsWithFutureInvitationsInManagedObjectContext:(id)a0;
- (id)calendarItemWithLocalUID:(id)a0 inManagedObjectContext:(id)a1;
- (id)calendarItemWithSharedUID:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)hasEntitiesInManagedObjectContext:(id)a0;

@end
