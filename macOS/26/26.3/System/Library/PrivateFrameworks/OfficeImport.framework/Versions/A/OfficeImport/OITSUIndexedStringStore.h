@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface OITSUIndexedStringStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (unsigned long long)count;
- (id)init;
- (unsigned long long)indexForString:(id)a0;
- (void)dealloc;
- (id)stringForIndex:(unsigned long long)a0;

@end
