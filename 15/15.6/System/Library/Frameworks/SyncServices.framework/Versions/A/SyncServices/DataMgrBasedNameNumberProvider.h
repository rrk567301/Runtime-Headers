@interface DataMgrBasedNameNumberProvider : ISDNameNumberProvider

- (id)manager;
- (char)foundMappingForNewName:(id)a0 inMap:(id)a1;
- (id)initWithDataManager:(id)a0;

@end
