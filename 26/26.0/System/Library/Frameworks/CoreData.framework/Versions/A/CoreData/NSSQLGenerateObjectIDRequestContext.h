@class NSDictionary, NSSQLModel;

@interface NSSQLGenerateObjectIDRequestContext : NSSQLStoreRequestContext {
    NSDictionary *_entitiesAndCounts;
    NSSQLModel *_model;
}

- (void)dealloc;
- (BOOL)isWritingRequest;
- (id)initForEntitiesAndCounts:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestCore:(id *)a0;

@end
