@class NSString, NSMutableDictionary;

@interface CRKMemoryBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol>

@property (readonly, nonatomic) NSMutableDictionary *backing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (char)setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)removeAllDataWithError:(id *)a0;
- (char)removeDataForKey:(id)a0 error:(id *)a1;

@end
