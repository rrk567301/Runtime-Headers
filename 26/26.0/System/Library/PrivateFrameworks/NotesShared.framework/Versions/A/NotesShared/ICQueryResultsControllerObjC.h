@class NSManagedObjectContext, ICQueryObjC;

@interface ICQueryResultsControllerObjC : NSObject

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) ICQueryObjC *query;
@property (nonatomic, readonly) id fetchRequest;

- (id)performFetch;
- (id)init;
- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0 query:(id)a1;

@end
