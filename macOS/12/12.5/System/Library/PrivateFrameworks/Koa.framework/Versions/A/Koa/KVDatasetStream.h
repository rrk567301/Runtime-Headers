@class NSString, NSMutableArray, NSObject;
@protocol KVDonateService;

@interface KVDatasetStream : NSObject {
    NSObject<KVDonateService> *_service;
    long long _itemType;
    NSString *_name;
    NSMutableArray *_itemBuffers;
    unsigned long long _flushThreshold;
    unsigned long long _bufferSize;
    BOOL _active;
}

+ (id)streamWithName:(id)a0 itemType:(long long)a1 service:(id)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)finish:(id /* block */)a0;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 itemType:(long long)a1 service:(id)a2 flushThreshold:(unsigned long long)a3;
- (BOOL)_flushItemsWithError:(id *)a0;
- (BOOL)removeItemId:(id)a0 error:(id *)a1;

@end
