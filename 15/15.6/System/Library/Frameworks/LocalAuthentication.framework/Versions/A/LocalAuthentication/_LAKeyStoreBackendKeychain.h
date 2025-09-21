@class NSString;

@interface _LAKeyStoreBackendKeychain : NSObject <LAKeyStoreBackend>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)createGenericPasswordWithQuery:(id)a0 error:(id *)a1;
- (char)createKeyWithQuery:(id)a0 error:(id *)a1;
- (id)fetchItemWithQuery:(id)a0 error:(id *)a1;
- (id)fetchItemsWithQuery:(id)a0 error:(id *)a1;
- (char)removeItemsWithQuery:(id)a0 error:(id *)a1;

@end
