@class _PASQueueLock;

@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}

- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)a0 error:(id *)a1;
- (id)fetchInlineSetComplicationDescriptors;
- (BOOL)writeComplicationsInlineSetCache:(id)a0;
- (BOOL)_writeComplicationsCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (void).cxx_destruct;
- (BOOL)writeComplicationsModularSetCache:(id)a0;
- (id)fetchModularSetComplicationDescriptors;
- (id)fetchLandscapeModularSetComplicationDescriptors;
- (id)init;
- (BOOL)writeComplicationsLandscapeModularSetCache:(id)a0;

@end
