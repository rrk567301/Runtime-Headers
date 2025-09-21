@class NSFetchRequest, NSManagedObjectID;

@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext {
    NSManagedObjectID *_objectID;
    NSFetchRequest *_fetchRequest;
    char _forConflictAnalysis;
}

- (void)dealloc;
- (char)executeRequestCore:(id *)a0;
- (id)initWithObjectID:(id)a0 context:(id)a1 sqlCore:(id)a2;

@end
