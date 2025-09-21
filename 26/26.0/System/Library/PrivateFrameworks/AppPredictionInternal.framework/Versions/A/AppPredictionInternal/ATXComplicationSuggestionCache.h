@class _PASQueueLock;

@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}

- (id)init;
- (id)fetchModularSetComplicationDescriptors;
- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)a0 error:(id *)a1;
- (id)fetchLandscapeModularSetComplicationDescriptors;
- (BOOL)writeComplicationsModularSetCache:(id)a0;
- (BOOL)writeComplicationsInlineSetCache:(id)a0;
- (id)fetchInlineSetComplicationDescriptors;
- (BOOL)writeComplicationsLandscapeModularSetCache:(id)a0;
- (BOOL)_writeComplicationsCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (void).cxx_destruct;

@end
