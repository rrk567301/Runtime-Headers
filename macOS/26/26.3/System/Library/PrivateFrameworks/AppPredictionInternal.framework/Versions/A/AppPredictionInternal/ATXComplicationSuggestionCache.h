@class _PASQueueLock;

@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}

- (BOOL)writeComplicationsLandscapeModularSetCache:(id)a0;
- (id)fetchInlineSetComplicationDescriptors;
- (id)init;
- (id)fetchLandscapeModularSetComplicationDescriptors;
- (id)fetchModularSetComplicationDescriptors;
- (BOOL)_writeComplicationsCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (void).cxx_destruct;
- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)a0 error:(id *)a1;
- (BOOL)writeComplicationsModularSetCache:(id)a0;
- (BOOL)writeComplicationsInlineSetCache:(id)a0;

@end
