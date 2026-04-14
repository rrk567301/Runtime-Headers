@class NSSet, NSManagedObjectContext;

@interface FeedbackCore.FBKManagedObjectChanges : NSObject {
    void /* unknown type, empty encoding */ notification;
}

@property (nonatomic, readonly) NSSet *insertedObjects;
@property (nonatomic, readonly) NSSet *updatedObjects;
@property (nonatomic, readonly) NSSet *deletedObjects;
@property (nonatomic, readonly) NSSet *refreshedObjects;
@property (nonatomic, readonly) NSSet *invalidatedObjects;
@property (nonatomic, readonly) BOOL invalidatedAllObjects;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

- (id)init;
- (void).cxx_destruct;

@end
