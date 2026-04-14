@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface OITSUIndexedStringStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (id)stringForIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (unsigned long long)indexForString:(id)a0;
- (id)init;
- (void)dealloc;

@end
