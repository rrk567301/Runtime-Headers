@class NSString, NSMutableDictionary;

@interface _LAKeyStoreBackendFake : NSObject <LAKeyStoreBackend> {
    NSMutableDictionary *_keys;
    NSMutableDictionary *_genps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)createGenericPasswordWithQuery:(id)a0 error:(id *)a1;
- (char)createKeyWithQuery:(id)a0 error:(id *)a1;
- (id)fetchItemWithQuery:(id)a0 error:(id *)a1;
- (id)fetchItemsWithQuery:(id)a0 error:(id *)a1;
- (char)removeItemsWithQuery:(id)a0 error:(id *)a1;

@end
