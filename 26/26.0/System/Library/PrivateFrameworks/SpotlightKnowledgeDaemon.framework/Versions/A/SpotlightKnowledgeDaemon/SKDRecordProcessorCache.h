@class NSMutableDictionary;

@interface SKDRecordProcessorCache : NSObject {
    NSMutableDictionary *_cache;
}

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (id)processorWithName:(id)a0;
- (id)processorsWithNames:(id)a0;

@end
