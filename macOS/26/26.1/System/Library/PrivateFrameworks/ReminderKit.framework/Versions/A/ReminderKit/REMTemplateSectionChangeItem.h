@class REMObjectID;

@interface REMTemplateSectionChangeItem : REMBaseSectionChangeItem

@property (retain, nonatomic) REMObjectID *parentTemplateID;

+ (id)newObjectID;
+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)a0;

- (id)initWithObjectID:(id)a0 displayName:(id)a1 insertIntoTemplateChangeItem:(id)a2;
- (void)removeFromParentTemplate;

@end
