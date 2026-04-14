@class NSArray;

@interface SDDiagnosticClientSet : NSObject {
    NSArray *_defaultClients;
    NSArray *_privateClients;
    NSArray *_managedClients;
}

+ (id)nonPrivateCoreSpotlightClientsForUser:(unsigned int)a0 bundleID:(id)a1 protectionClass:(id)a2;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)enumerateCoreSpotlightClientsWithDefaultBlock:(id /* block */)a0 privateBlock:(id /* block */)a1 managedBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithDefaultClients:(id)a0 privateClients:(id)a1 managedClients:(id)a2;

@end
