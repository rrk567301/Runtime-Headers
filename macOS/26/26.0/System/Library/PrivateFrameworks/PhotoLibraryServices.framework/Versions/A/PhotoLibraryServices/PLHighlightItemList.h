@class NSManagedObjectID, NSString, NSArray, NSMutableSet, NSDate, NSMutableOrderedSet, NSSet;
@protocol PLHighlightItem;

@interface PLHighlightItemList : NSObject <PLHighlightSortable>

@property (readonly, nonatomic) NSMutableOrderedSet *internalHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalAddedHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalRemovedHighlightItems;
@property (readonly, nonatomic) NSDate *groupingStartDate;
@property (readonly, nonatomic) NSDate *groupingEndDate;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property (readonly, nonatomic) BOOL isNewList;
@property (readonly, nonatomic) BOOL isCandidateForReuse;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property (readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property (readonly, nonatomic) id<PLHighlightItem> parentHighlightItem;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeSortDescriptors;

- (id)initWithParentHighlightItem:(id)a0 childHighlightItems:(id)a1;
- (void)reset;
- (void)_updateHighlightItemsOrdering;
- (void)removeHighlightItem:(id)a0;
- (id)initAsNewList;
- (void)mergeWithHighlightItemList:(id)a0;
- (void)addHighlightItem:(id)a0;
- (void)_updateStartEndDates;
- (void).cxx_destruct;

@end
