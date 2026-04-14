@class NSString;

@interface RTAuthorizedLocationConfirmationStatusStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_deleteConfirmationStatus:(id /* block */)a0;
- (void)_fetchConfirmationStatusWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchConfirmationStatusWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_storeConfirmationStatus:(id)a0 handler:(id /* block */)a1;
- (void)deleteConfirmationStatus:(id /* block */)a0;
- (void)fetchConfirmationStatusWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)storeConfirmationStatus:(id)a0 handler:(id /* block */)a1;

@end
