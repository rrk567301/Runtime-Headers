@class NSMutableDictionary;

@interface SKDRecordProcessorCache : NSObject {
    NSMutableDictionary *_cache;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)init;
- (id)processorWithName:(id)a0;
- (id)processorsWithNames:(id)a0;

@end
