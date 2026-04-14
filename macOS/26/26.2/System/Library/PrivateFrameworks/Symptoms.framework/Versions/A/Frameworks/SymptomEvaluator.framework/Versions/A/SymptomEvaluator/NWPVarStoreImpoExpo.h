@class NSString, ImpoExpoService;

@interface NWPVarStoreImpoExpo : NSObject <NWPVarStoreProtocol> {
    ImpoExpoService *ieservice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (long long)deleteItemsMatchingPredicate:(id)a0;
- (void).cxx_destruct;
- (id)listItemsNameWithPrefix:(id)a0 sortDescriptor:(id)a1;
- (id)init;
- (id)fetchItemUnderName:(id)a0 verificationBlock:(id /* block */)a1;
- (BOOL)storeUnderName:(id)a0 item:(id)a1;
- (id)_initWithImpoExpo:(id)a0;

@end
