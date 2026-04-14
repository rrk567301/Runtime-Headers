@interface NSDocumentControllerPersistentRestoration : NSObject {
    struct __CFDictionary { } *autoIDToDocument;
    struct __CFDictionary { } *autoIDToWaiters;
}

- (void)dealloc;
- (id)init;
- (BOOL)waitForDocumentWithAutoID:(unsigned int)a0 thenDo:(id /* block */)a1;
- (void)loadedDocument:(id)a0 forAutoID:(unsigned int)a1;
- (void)windowsDidFinishRestoring;

@end
