@class NSDictionary, NSSQLModel;

@interface NSSQLGenerateObjectIDRequestContext : NSSQLStoreRequestContext {
    NSDictionary *_entitiesAndCounts;
    NSSQLModel *_model;
}

- (void)dealloc;
- (char)executeRequestCore:(id *)a0;
- (id)initForEntitiesAndCounts:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (char)isWritingRequest;

@end
