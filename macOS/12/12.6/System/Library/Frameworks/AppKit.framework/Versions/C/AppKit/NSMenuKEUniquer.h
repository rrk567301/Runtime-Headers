@class NSLock;

@interface NSMenuKEUniquer : NSObject {
    struct __CFDictionary { } *keyTable;
    NSLock *lock;
}

+ (id)mainMenuUniquer;

- (void)dealloc;
- (id)init;
- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (void)removeAllItems;
- (id)items;
- (void)addItems:(id)a0;
- (void)removeItems:(id)a0;
- (id)_debugContents;
- (void)_coreAddItem:(id)a0;
- (void)_coreRemoveItem:(id)a0;
- (void)_printContents;

@end
