@class REMObjectID;

@interface REMSmartListSectionChangeItem : REMBaseSectionChangeItem

@property (retain, nonatomic) REMObjectID *smartListID;

+ (id)newObjectID;
+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)a0;

- (id)initWithObjectID:(id)a0 displayName:(id)a1 insertIntoSmartListChangeItem:(id)a2;
- (void)removeFromSmartList;

@end
