@class REMObjectID, REMSmartList;

@interface REMSmartListSection : REMBaseSection

@property (readonly, nonatomic) REMSmartList *smartList;
@property (retain, nonatomic) REMObjectID *smartListID;

+ (id)newObjectID;
+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)a0;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0 smartList:(id)a1 storage:(id)a2;

@end
