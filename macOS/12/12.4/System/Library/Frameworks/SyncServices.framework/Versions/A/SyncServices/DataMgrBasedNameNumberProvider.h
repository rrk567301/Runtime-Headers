@interface DataMgrBasedNameNumberProvider : ISDNameNumberProvider

- (id)manager;
- (id)initWithDataManager:(id)a0;
- (BOOL)foundMappingForNewName:(id)a0 inMap:(id)a1;

@end
