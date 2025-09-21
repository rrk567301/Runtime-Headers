@class NSString, REMObjectID;

@interface REMListSectionChangeItem : REMBaseSectionChangeItem

@property (retain, nonatomic) REMObjectID *listID;
@property (copy, nonatomic) NSString *canonicalName;

+ (id)objectIDWithUUID:(id)a0;
+ (id)newObjectID;
+ (id)cdEntityName;
+ (id)keysToObserve;

- (void)removeFromList;
- (id)initWithObjectID:(id)a0 displayName:(id)a1 insertIntoListChangeItem:(id)a2;

@end
