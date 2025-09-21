@class NSString;

@interface _PFSQLiteArchiveReadwriteTransaction : _PFSQLiteArchiveReadonlyTransaction <PFSQLiteMutator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)deleteObject:(id)a0 error:(out id *)a1;
- (BOOL)archiveObject:(id)a0 error:(out id *)a1;
- (BOOL)replaceObject:(id)a0 withObject:(id)a1 error:(out id *)a2;
- (BOOL)archiveObjects:(id)a0 error:(out id *)a1;
- (BOOL)deleteObjectsOfClass:(Class)a0 predicate:(id)a1 error:(out id *)a2;
- (BOOL)inWriteTransaction:(id /* block */)a0 error:(out id *)a1;
- (id)setupObjectDescriptorForClass:(Class)a0 expectedObjectDescriptor:(id)a1 error:(out id *)a2;
- (BOOL)updateObject:(id)a0 error:(out id *)a1;

@end
