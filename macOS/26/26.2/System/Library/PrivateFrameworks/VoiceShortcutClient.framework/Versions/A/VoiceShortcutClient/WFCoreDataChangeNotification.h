@class NSSet;

@interface WFCoreDataChangeNotification : NSObject

@property (readonly, nonatomic) NSSet *updated;
@property (readonly, nonatomic) NSSet *inserted;
@property (readonly, nonatomic) NSSet *deleted;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) BOOL invalidatedAllObjects;
@property (readonly, nonatomic) NSSet *updatedDescriptors;
@property (readonly, nonatomic) NSSet *insertedDescriptors;
@property (readonly, nonatomic) NSSet *deletedDescriptors;

- (BOOL)hasChanges;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)appliesToResultState:(id)a0;
- (id)initWithInvalidatedAllObjects:(BOOL)a0 updated:(id)a1 inserted:(id)a2 deleted:(id)a3 processIdentifier:(int)a4;
- (id)notificationByMergingChangesFromNotification:(id)a0;
- (BOOL)originatedInCurrentProcess;

@end
