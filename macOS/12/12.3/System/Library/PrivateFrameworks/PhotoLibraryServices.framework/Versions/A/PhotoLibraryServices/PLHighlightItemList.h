@class NSString, NSArray, NSMutableSet, NSDate, NSMutableOrderedSet, NSSet;
@protocol PLHighlightItem;

@interface PLHighlightItemList : NSObject

@property (readonly, nonatomic) NSMutableOrderedSet *internalHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalAddedHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalRemovedHighlightItems;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long numberOfAssetsInExtended;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property (readonly, nonatomic) BOOL isNewList;
@property (readonly, nonatomic) BOOL isCandidateForReuse;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property (readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property (readonly, nonatomic) id<PLHighlightItem> parentHighlightItem;

+ (id)timeSortDescriptors;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (void)_updateHighlightItemsOrdering;
- (void)_updateStartEndDates;
- (void)addHighlightItem:(id)a0;
- (id)initWithParentHighlightItem:(id)a0 childHighlightItems:(id)a1;
- (id)initAsNewList;
- (void)removeHighlightItem:(id)a0;
- (void)mergeWithHighlightItemList:(id)a0;

@end
