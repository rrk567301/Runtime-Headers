@class NSString, _LSDatabase;

@interface LSMIResultRegistrantTrueDatabaseContext : NSObject <LSMIResultRegistrantDatabaseContext> {
    struct LSContext { _LSDatabase *db; } _context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)fullBundleExistsForIdentifier:(id)a0;
- (unsigned int)findOrRegisterContainerizedNodeReinitializingContext:(id)a0 installDictionary:(id)a1 error:(id *)a2;
- (id)findContainerizedRecordForBundleUnit:(unsigned int)a0 error:(id *)a1;
- (id /* block */)unregisterApplicationWithBundleIdentifier:(id)a0 type:(unsigned int)a1 error:(id *)a2;
- (id)initWithDatabase:(id)a0;

@end
