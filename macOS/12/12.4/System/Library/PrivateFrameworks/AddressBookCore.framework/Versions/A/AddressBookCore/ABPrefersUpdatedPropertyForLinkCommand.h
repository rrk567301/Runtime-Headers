@class NSArray;
@protocol ABLinkingInfoDataSource;

@interface ABPrefersUpdatedPropertyForLinkCommand : ABBookCommand {
    NSArray *_updatedPeople;
    id<ABLinkingInfoDataSource> _adapter;
}

+ (id)prefersNameCommandWithUpdatedPeople:(id)a0 adapter:(id)a1;
+ (id)prefersPhotoCommandWithUpdatedPeople:(id)a0 adapter:(id)a1;
+ (id)_buildCommandOfClass:(Class)a0 withUpdatedPeople:(id)a1 adapter:(id)a2;

- (void)dealloc;
- (void)execute;
- (id)propertiesThatWillFlagAPersonWhenChanged;
- (void)modifyPerson:(id)a0;
- (id)initWithUpdatedPeople:(id)a0 adapter:(id)a1;
- (id)peopleNeedingFlagged;
- (void)modifyPeople:(id)a0;
- (id)relevantUpdatedPeople;
- (id)arrayByRemovingPeopleWhereMoreThanOneHaveChangedInALink:(id)a0;
- (BOOL)personNeedsFlagged:(id)a0;

@end
