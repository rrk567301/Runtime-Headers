@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface OITSUIndexedStringStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (void)dealloc;
- (unsigned long long)indexForString:(id)a0;
- (unsigned long long)count;
- (id)init;
- (id)stringForIndex:(unsigned long long)a0;

@end
