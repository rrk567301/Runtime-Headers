@class NSSet;

@interface EFNSSetDifference : NSObject

@property (readonly) NSSet *insertions;
@property (readonly) NSSet *removals;
@property (readonly) BOOL hasChanges;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInsertedObjects:(id)a0 removedObjects:(id)a1;

@end
