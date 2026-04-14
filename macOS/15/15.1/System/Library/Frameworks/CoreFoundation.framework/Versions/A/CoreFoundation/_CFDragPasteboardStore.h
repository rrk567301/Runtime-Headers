@class _CFPasteboardClientInstanceID;

@interface _CFDragPasteboardStore : _CFPasteboardStore {
    struct __CFDictionary { } *_nextUniquingNumbers;
    _CFPasteboardClientInstanceID *_sourceProcessID;
}

+ (id)dragPasteboard;

- (void)dealloc;
- (struct __CFURL { } *)_createUniqueFileURLInDirectory:(struct __CFURL { } *)a0 withBaseName:(struct __CFString { } *)a1 extension:(struct __CFString { } *)a2 locale:(struct __CFLocale { } *)a3;
- (BOOL)_isManagedPromiseDragForGeneration:(unsigned long long)a0 itemIdentifier:(unsigned long long)a1;
- (void)_onqueue_clearGenerationSpecificData;
- (void)_onqueue_handleNewEntries:(struct __CFArray { } *)a0 forMessage:(id)a1 shouldInvalidateClientMetadata:(BOOL *)a2;
- (void)handleUniquePromiseFile:(id)a0;
- (void)requestDataForGeneration:(unsigned long long)a0 itemIdentifier:(unsigned long long)a1 flavor:(struct __CFString { } *)a2 inResponseToMessage:(id)a3 completionHandler:(id /* block */)a4;

@end
