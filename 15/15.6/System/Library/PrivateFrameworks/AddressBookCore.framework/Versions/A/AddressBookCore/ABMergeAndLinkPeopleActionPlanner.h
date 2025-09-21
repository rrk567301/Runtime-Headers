@class NSArray;

@interface ABMergeAndLinkPeopleActionPlanner : NSObject {
    NSArray *_people;
}

@property (readonly) int plannedActions;

- (void)dealloc;
- (id)initWithPeople:(id)a0;
- (char)anyAccountHasMoreThanOneWritablePerson:(id)a0;
- (char)anyPersonIsReadOnly;
- (id)menuTitleForPlannedActions:(int)a0;
- (id)peopleByStoreURL;
- (char)thereArePeopleInMoreThanOneAccount:(id)a0;

@end
