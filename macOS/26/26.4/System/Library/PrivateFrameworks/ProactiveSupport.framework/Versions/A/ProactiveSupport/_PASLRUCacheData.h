@class NSMutableDictionary, NSMutableArray;

@interface _PASLRUCacheData : NSObject {
    NSMutableDictionary *items;
    NSMutableArray *keysMRU;
}

- (void).cxx_destruct;
- (id)init;

@end
