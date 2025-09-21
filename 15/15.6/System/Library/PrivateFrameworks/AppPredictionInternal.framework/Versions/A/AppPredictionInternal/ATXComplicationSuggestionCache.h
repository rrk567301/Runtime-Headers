@class _PASQueueLock;

@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)a0 error:(id *)a1;
- (char)_writeComplicationsCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (id)fetchInlineSetComplicationDescriptors;
- (id)fetchLandscapeModularSetComplicationDescriptors;
- (id)fetchModularSetComplicationDescriptors;
- (char)writeComplicationsInlineSetCache:(id)a0;
- (char)writeComplicationsLandscapeModularSetCache:(id)a0;
- (char)writeComplicationsModularSetCache:(id)a0;

@end
