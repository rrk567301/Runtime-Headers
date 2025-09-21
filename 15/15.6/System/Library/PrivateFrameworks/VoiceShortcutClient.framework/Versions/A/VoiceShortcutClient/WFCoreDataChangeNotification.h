@class NSSet;

@interface WFCoreDataChangeNotification : NSObject

@property (readonly, nonatomic) char invalidatedAllObjects;
@property (readonly, nonatomic) NSSet *updated;
@property (readonly, nonatomic) NSSet *inserted;
@property (readonly, nonatomic) NSSet *deleted;
@property (readonly, nonatomic) int processIdentifier;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)hasChanges;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)insertedDescriptors;
- (char)appliesToResultState:(id)a0;
- (id)deletedDescriptors;
- (id)initWithInvalidatedAllObjects:(char)a0 updated:(id)a1 inserted:(id)a2 deleted:(id)a3 processIdentifier:(int)a4;
- (id)notificationByMergingChangesFromNotification:(id)a0;
- (char)originatedInCurrentProcess;
- (id)updatedDescriptors;

@end
