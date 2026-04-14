@interface NSDocumentControllerPersistentRestoration : NSObject {
    struct __CFDictionary { } *autoIDToDocument;
    struct __CFDictionary { } *autoIDToWaiters;
}

- (void)dealloc;
- (id)init;
- (void)loadedDocument:(id)a0 forAutoID:(unsigned int)a1;
- (BOOL)waitForDocumentWithAutoID:(unsigned int)a0 thenDo:(id /* block */)a1;
- (void)windowsDidFinishRestoring;

@end
