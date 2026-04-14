@class NSArray, NSString, NSMutableArray;

@interface _FetchedItemVisitor : NSObject <CNContactPosterDataManagedItemVisitor> {
    NSMutableArray *_items;
}

@property (readonly) NSArray *visitedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
