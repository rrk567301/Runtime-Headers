@class _PASQueueLock;

@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}

- (BOOL)writeComplicationsModularSetCache:(id)a0;
- (id)fetchModularSetComplicationDescriptors;
- (BOOL)writeComplicationsInlineSetCache:(id)a0;
- (BOOL)writeComplicationsLandscapeModularSetCache:(id)a0;
- (void).cxx_destruct;
- (id)fetchLandscapeModularSetComplicationDescriptors;
- (id)init;
- (BOOL)_writeComplicationsCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)a0 error:(id *)a1;
- (id)fetchInlineSetComplicationDescriptors;

@end
